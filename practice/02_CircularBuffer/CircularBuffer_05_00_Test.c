/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CircularBuffer_05_00_Test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:06:24 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/07 19:56:40 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "unity_fixture.h"
#include "CircularBuffer.h"

TEST_GROUP(CircularBuffer);

static unsigned int	expectedArr[10] = {0};
static unsigned int	*cBuf;

TEST_SETUP(CircularBuffer)
{
}

TEST_TEAR_DOWN(CircularBuffer)
{
	if (cBuf)
		free(cBuf);
}

TEST(CircularBuffer, bufCreate)
{
	CircularBuffer_ctor(&cBuf);
	TEST_ASSERT_EQUAL_HEX32_ARRAY(expectedArr, cBuf, 10);
}
