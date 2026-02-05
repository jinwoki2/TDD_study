/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LedDriverTestRunner.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:01:46 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/05 18:02:37 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"

TEST_GROUP_RUNNER(LedDriver)
{
    RUN_TEST_CASE(LedDriver, LedsOffAfterCreate);
}
