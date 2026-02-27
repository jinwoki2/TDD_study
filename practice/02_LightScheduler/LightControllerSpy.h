/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightControllerSpy.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 01:28:06 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/28 01:29:50 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LightController.h"

enum
{
	LIGHT_ID_UNKNOWN = -1, LIGHT_STATE_UNKNOWN = -1,
	LIGHT_OFF = 0, LIGHT_ON = 1
};

int	LightControllerSpy_GetLastId(void);
int	LightControllerSpy_GetLastState(void);

