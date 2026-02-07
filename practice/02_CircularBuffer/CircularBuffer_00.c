/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CircularBuffer_00.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:31:49 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/07 19:54:56 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "unity_fixture.h"
#include "CircularBuffer.h"

void	CircularBuffer_ctor(unsigned int **cBuf_ptr)
{
	*cBuf_ptr = calloc(10, sizeof(unsigned int));
}
