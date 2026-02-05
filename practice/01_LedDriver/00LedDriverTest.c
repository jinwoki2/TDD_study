/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriverTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 09:42:48 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/03 09:56:09 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"

TEST_GROUP(LedDriver);

TEST_SETUP(LedDriver)
{
}

TEST_TEAR_DOWN(LedDriver)
{

}

TEST(LedDriver, LedsOffAfterCreate)
{
	TEST_FAIL_MESSAGE("Start here");
}
