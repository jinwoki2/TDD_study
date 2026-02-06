/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_LedDriverTest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 23:17:06 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/07 04:02:46 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"
#include "LedDriver.h"

TEST_GROUP(LedDriver);

TEST_SETUP(LedDriver)
{
}

TEST_TEAR_DOWN(LedDriver)
{
}

TEST(LedDriver, LedsOffAfterCreate)
{
	uint16_t	vLeds = 0xffff;
	LedDriver_ctor(&vLeds);
	TEST_ASSERT_EQUAL_HEX16(0, vLeds);
}

TEST(LedDriver, TurnOnLedOne)
{
	uint16_t	vLeds;
	LedDriver_ctor(&vLeds);
	LedDriver_TurnOn(1);
	TEST_ASSERT_EQUAL_HEX16(1, vLeds);
}
