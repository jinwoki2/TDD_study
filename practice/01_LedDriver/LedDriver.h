/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriver.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 02:42:54 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/07 04:04:58 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LEDDRIVER_H
# define LEDDRIVER_H

# include <stdint.h>

void	LedDriver_ctor(uint16_t *vleds);
void	LedDriver_dtor(uint16_t	*vleds);

void	LedDriver_TurnOn(int ledNum);


#endif
