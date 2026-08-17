/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightControllerSpyTest.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:18:06 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/27 23:17:56 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CppUTest/TestHarness.h"

extern "C"
{
	#include "LightControllerSpy.h"
}


TEST_GROUP(LightScheduler)
{
	void	setup()
	{
		LightController_Create();
	}
	void	teardown()
	{
		LightController_Destroy();
	}
};

/* 
TEST(LightScheduler, ScheduleOnEverydayNotTimeYet)
{
	LightScheduler_ScheduleTurnOn(3, EVERYDAY, 1200);
	FakeTimeService_SetDay(MONDAY);
	FakeTimeService_SetMinute(1199);
	LightScheduler_Wakeup();

	LONGS_EQUAL(LIGHT_ID_UNKNOWN, LightControllerSpy_GetLastId());
	LONGS_EQUAL(LIGHT_STATE_UNKNOWN, LightControllerSpy_GetLastState());
}
 */

TEST(LightControllerSpy, Create)
{
    LONGS_EQUAL(LIGHT_ID_UNKNOWN, LightControllerSpy_GetLastId());
    LONGS_EQUAL(LIGHT_STATE_UNKNOWN, LightControllerSpy_GetLastState());
}

TEST(LightControllerSpy, RememberTheLastLightIdControlled)
{
	LightController_On(10);
	LONGS_EQUAL(10, LightControllerSpy_GetLastId());
	LONGS_EQUAL(LIGHT_ON, LightControllerSpy_GetLastState());
}

