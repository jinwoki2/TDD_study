/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightControllerSpy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 01:34:25 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/28 01:38:11 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LightControllerSpy.h"

static int lastId;
static int lastState;

void	LightController_Create(void)
{
	lastId = LIGHT_ID_UNKNOWN;
	lastState = LIGHT_STATE_UNKNOWN;
}

void	LightController_On(int id)
{
	lastId = id;
	lastState = LIGHT_ON;
}

void	LightController_Off(int id)
{
	lastId = id;
	lastState = LIGHT_OFF;
}

int	LightControllerSpy_GetLastId(void)
{
	return (lastId);
}

int	LightControllerSpy_GetLastState(void)
{
	return (lastState);
}
