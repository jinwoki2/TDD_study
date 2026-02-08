/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriver_05_01_TestRunner.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 23:24:35 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/09 01:05:07 by jinwoki2         ###   ########.fr       */
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
	RUN_TEST_CASE(LedDriver, LedMemoryIsNotReadable);
	RUN_TEST_CASE(LedDriver, UpperAndLowerBounds);
	RUN_TEST_CASE(LedDriver, OutOfBoundsTurnOnDoesNoHarm);
	RUN_TEST_CASE(LedDriver, OutOfBoundsTurnOffDoesNoHarm);
	RUN_TEST_CASE(LedDriver, OutOfBoundsProducesRuntimeError);
	RUN_TEST_CASE(LedDriver, OutofBoundsToDo);
}
