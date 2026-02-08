/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriver_00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 02:46:06 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/08 23:59:45 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LedDriver.h"

/* ***************************** static variable **************************** */

static uint16_t	*ledsAddress;
static uint16_t	ledsImage;

/* ****************** private behavior forward declaration ****************** */

static uint16_t	__convertLedNumberToBit(int ledNum);
static void		__updateHardware(void);

/* **************************** public behavior ***************************** */

void	LedDriver_ctor(uint16_t *vLeds)
{
	ledsAddress = vLeds;
	ledsImage = ALL_LEDS_OFF;
	__updateHardware();
}

void	LedDriver_dtor(uint16_t	*vLeds)
{
}

void	LedDriver_TurnOn(int ledNum)
{
	if (ledNum <= 0 || 16 < ledNum)
		return ;
	ledsImage |= __convertLedNumberToBit(ledNum);
	__updateHardware();
}

void	LedDriver_TurnOff(int ledNum)
{
	if (ledNum <= 0 || 16 < ledNum)
		return ;
	ledsImage &= ~(__convertLedNumberToBit(ledNum));
	__updateHardware();
}

void	LedDriver_TurnAllOn(void)
{
	ledsImage = ALL_LEDS_ON;
	__updateHardware();
}

/* **************************** private behavior **************************** */

static uint16_t	__convertLedNumberToBit(int ledNum)
{
	return (1 << (ledNum - 1));
}

static void	__updateHardware(void)
{
	*ledsAddress = ledsImage;
}
