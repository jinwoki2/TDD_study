/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightControllerSpy.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 16:11:29 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/08/12 16:13:39 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LightController.h"

enum
{
	LIGHT_ID_UNKONW = -1,
	LIGHT_STATE_UNKNOWN = -1,
	LIGHT_OFF = 0,
	LIGHT_ON = 1
};

int	LightControllerSpy_GetLastId(void);
int	LightControllerSpy_GetLastState(void);