/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriver.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 02:42:54 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/13 14:43:45 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LEDDRIVER_H
# define LEDDRIVER_H

# include <stdint.h>

void	LedDriver_ctor(uint16_t *vLeds_addr);
void	LedDriver_dtor(uint16_t	*vLeds_addr);

void	LedDriver_TurnOn(int ledNum);
void	LedDriver_TurnOff(int ledNum);

void	LedDriver_TurnAllOn(void);
void	LedDriver_TurnAllOff(void);

_Bool	LedDriver_IsOn(int ledNum);
_Bool	LedDriver_IsOff(int ledNum);

#endif
