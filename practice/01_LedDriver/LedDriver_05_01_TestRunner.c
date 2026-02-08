/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriver_05_01_TestRunner.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 23:24:35 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/08 01:03:55 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"

TEST_GROUP_RUNNER(LedDriver)
{
	RUN_TEST_CASE(LedDriver, LedsOffAfterCreate);
	RUN_TEST_CASE(LedDriver, TurnOnLedOne);
	RUN_TEST_CASE(LedDriver, TurnOffLedOne);
	RUN_TEST_CASE(LedDriver, TurnOnMultipleLeds);
	RUN_TEST_CASE(LedDriver, AllOn);
	RUN_TEST_CASE(LedDriver, TurnOffAnyLed);
}
