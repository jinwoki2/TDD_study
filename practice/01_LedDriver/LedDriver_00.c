/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriver_00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 02:46:06 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/07 04:14:22 by jinwoki2         ###   ########.fr       */
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
	(void)vleds;
}

void	LedDriver_TurnOn(int ledNum)
{
	*ledsAddress = ledNum;
}
