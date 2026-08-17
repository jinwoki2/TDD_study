/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightSchedulerTest.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 15:39:21 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/08/12 15:43:22 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

TEST(LightScheduler, ScheduleOnEverydayNotTimeYet)
{
	LightScheduler_ScheduleTurnOn(3, EVERYDAY, 1200);
	FakeTimeService_SetDay(MONDAY);
	FakeTimeService_SetMinute(1199);
	LightScheduler_Wakeup();

	LONGS_EQUAL(LIGHT_ID_UNKONWN, LightControllerSpy_GetLastId());
	LONGS_EQUAL(LIGHT_STATE_UNKOWN, LightControllerSpy_GetLastState());
}

TEST(LightScheduler, NoChangeToLightDuringInitialization)
{
	LONGS_EQUAL(LIGHT_ID_UNKNOWN, LightControllerSpy_GetLastId());
	LONGS_EQUAL(LIGHT_STATE_UNKOWN, LightControllerSpy_GetLastState());
}
