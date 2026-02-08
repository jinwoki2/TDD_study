/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriver.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 02:42:54 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/08 17:21:39 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LEDDRIVER_H
# define LEDDRIVER_H

# include <stdint.h>

enum 
{
	ALL_LEDS_ON = ~0, 
	ALL_LEDS_OFF = ~ALL_LEDS_ON
};

void	LedDriver_ctor(uint16_t *vLeds);
void	LedDriver_dtor(uint16_t	*vLeds);

void	LedDriver_TurnOn(int ledNum);
void	LedDriver_TurnOff(int ledNum);

void	LedDriver_TurnAllOn(void);

#endif
