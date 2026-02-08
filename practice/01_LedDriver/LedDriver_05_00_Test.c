/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriver_05_00_Test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 23:17:06 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/09 01:04:19 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"
#include "LedDriver.h"
#include "RuntimeError.h"
#include "RuntimeErrorStub.h"

TEST_GROUP(LedDriver);

static uint16_t	vLeds;

TEST_SETUP(LedDriver)
{
	LedDriver_ctor(&vLeds);
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
	LedDriver_TurnOn(1);
	TEST_ASSERT_EQUAL_HEX16(1, vLeds);
}

TEST(LedDriver, TurnOffLedOne)
{
	LedDriver_TurnOn(1);
	LedDriver_TurnOff(1);
	TEST_ASSERT_EQUAL_HEX16(0, vLeds);
}

TEST(LedDriver, TurnOnMultipleLeds)
{
	LedDriver_TurnOn(9);
	LedDriver_TurnOn(8);
	TEST_ASSERT_EQUAL_HEX16(0x180, vLeds);
}

TEST(LedDriver, TurnOffAnyLed)
{
    LedDriver_TurnAllOn();
    LedDriver_TurnOff(8);
    TEST_ASSERT_EQUAL_HEX16(0xff7f, vLeds);
}

TEST(LedDriver, AllOn)
{
	LedDriver_TurnAllOn();
	TEST_ASSERT_EQUAL_HEX16(0xffff, vLeds);
}

// 드라이버가 하드웨어에서 현재 LED 상태를 가져오지 않는다는 것을 보여주는 테스트
TEST(LedDriver, LedMemoryIsNotReadable)
{
	vLeds = 0xffff;
	LedDriver_TurnOn(8);
	TEST_ASSERT_EQUAL_HEX16(0x80, vLeds);
}

TEST(LedDriver, UpperAndLowerBounds)
{
	LedDriver_TurnOn(1);
	LedDriver_TurnOn(16);
	TEST_ASSERT_EQUAL_HEX16(0x8001, vLeds);
}

TEST(LedDriver, OutOfBoundsTurnOnDoesNoHarm)
{
	LedDriver_TurnOn(-1);
	LedDriver_TurnOn(0);
	LedDriver_TurnOn(33);
	LedDriver_TurnOn(3141);
	TEST_ASSERT_EQUAL_HEX16(0, vLeds);
}

TEST(LedDriver, OutOfBoundsTurnOffDoesNoHarm)
{
	LedDriver_TurnAllOn();
	LedDriver_TurnOff(-1);
	LedDriver_TurnOff(0);
	LedDriver_TurnOff(33);
	LedDriver_TurnOff(3141);
	TEST_ASSERT_EQUAL_HEX16(0xffff, vLeds);
}

TEST(LedDriver, OutOfBoundsProducesRuntimeError)
{
	LedDriver_TurnOn(-1);
	RUNTIME_ERROR("LED Driver: out-of-bounds LED", -1);
	TEST_ASSERT_EQUAL_STRING("LED Driver: out-of-bounds LED",
								RuntimeErrorStub_GetLastError());
	TEST_ASSERT_EQUAL(-1, RuntimeErrorStub_GetLastParameter());
}

IGNORE_TEST(LedDriver, OutofBoundsToDo)
{
	/* TODO: 런타임에 무엇을 해야 할까? */
}




