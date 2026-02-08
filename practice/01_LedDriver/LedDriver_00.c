/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriver_00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 02:46:06 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/08 01:03:28 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LedDriver.h"

static uint16_t	*ledsAddress;

void	LedDriver_ctor(uint16_t *vleds)
{
	ledsAddress = vleds;
	*ledsAddress = 0;
}

void	LedDriver_dtor(uint16_t	*vleds)
{
}

static uint16_t	__convertLedNumberToBit(int ledNum)
{
	return (1 << (ledNum - 1));
}

void	LedDriver_TurnOn(int ledNum)
{
	*ledsAddress |= __convertLedNumberToBit(ledNum);
}

void	LedDriver_TurnOff(int ledNum)
{
	*ledsAddress &= ~(__convertLedNumberToBit(ledNum));
}

void	LedDriver_TurnAllOn(void)
{
	*ledsAddress = ALL_LEDS_ON;
}
