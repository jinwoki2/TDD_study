/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_SprintfTestRunner.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:48:09 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/05 23:07:15 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"

TEST_GROUP_RUNNER(sprintf)
{
	RUN_TEST_CASE(sprintf, NoFormatOperations);
	RUN_TEST_CASE(sprintf, InsertString);
}

// 위 코드는 다음 코드와 동치이다.
/* 
TEST_SETUP(sprintf);
TEST(sprintf, NoFormatOperations);
TEST_TEAR_DOWN(sprintf);

TEST_SETUP(sprintf);
TEST(sprintf, InsertString);
TEST_TEAR_DOWN(sprintf);
 */