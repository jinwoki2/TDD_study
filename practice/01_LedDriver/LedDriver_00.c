/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriver_00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 02:46:06 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/13 14:43:26 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LedDriver.h"

/* ***************************** enumeration definition********************** */

enum 
{
	ALL_LEDS_ON = ~0, 
	ALL_LEDS_OFF = ~ALL_LEDS_ON
};

enum 
{	
	FIRST_LED = 1,
	LAST_LED = 16	
};

enum
{
	FALSE,
	TRUE
};


/* ***************************** static variable **************************** */

static uint16_t	*ledsAddress;
static uint16_t	ledsImage;

/* ****************** private behavior forward declaration ****************** */

static uint16_t	_convertLedNumberToBit(int ledNum);
static void		_updateHardware(void);
static _Bool	_IsLedOutOfBounds(int ledNum);
static void		_setLedImageBit(int ledNum);
static void		_clearLedImageBit(int ledNum);

/* **************************** public behavior ***************************** */

void	LedDriver_ctor(uint16_t *vLeds_addr)
{
	ledsAddress = vLeds_addr;
	ledsImage = ALL_LEDS_OFF;
	_updateHardware();
}

void	LedDriver_dtor(uint16_t	*vLeds_addr)
{
}

void	LedDriver_TurnOn(int ledNum)
{
	if (_IsLedOutOfBounds(ledNum))
		return ;
	_setLedImageBit(ledNum);
	_updateHardware();
}

void	LedDriver_TurnOff(int ledNum)
{
	if (_IsLedOutOfBounds(ledNum))
		return ;
	_clearLedImageBit(ledNum);
	_updateHardware();
}

void	LedDriver_TurnAllOn(void)
{
	ledsImage = ALL_LEDS_ON;
	_updateHardware();
}

void	LedDriver_TurnAllOff(void)
{
	ledsImage = ALL_LEDS_OFF;
	_updateHardware();
}

_Bool	LedDriver_IsOn(int ledNum)
{
	if (_IsLedOutOfBounds(ledNum))
		return (FALSE);
	return (ledsImage & (_convertLedNumberToBit(ledNum)));
}

_Bool	LedDriver_IsOff(int ledNum)
{
	return !(LedDriver_IsOn(ledNum));
}

/* **************************** private behavior **************************** */

static uint16_t	_convertLedNumberToBit(int ledNum)
{
	return (1 << (ledNum - 1));
}

static void	_updateHardware(void)
{
	*ledsAddress = ledsImage;
}

static _Bool	_IsLedOutOfBounds(int ledNum)
{
	 return (ledNum < FIRST_LED || LAST_LED < ledNum);
}

static void	_setLedImageBit(int ledNum)
{
	ledsImage |= _convertLedNumberToBit(ledNum);
}

static void	_clearLedImageBit(int ledNum)
{
	ledsImage &= ~_convertLedNumberToBit(ledNum);
}
