/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightControllerSpyTest.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 15:43:52 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/08/12 16:07:02 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CppUTest/TestHarness.h"

extern "C"
{
	#include "LightControllerSpy.h"
}

TEST_GROUP(LightControllerSpy)
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

