/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_SprintfTest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:11:00 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/05 22:49:35 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "unity_fixture.h"

TEST_GROUP(sprintf);

// 각 TEST()의 열린 괄호 '{'에 진입하기 전에 TEST_SETUP()에서 초기화 된다.
static char			output[100];
static const char	*expected;

TEST_SETUP(sprintf)
{
	memset(output, 0xaa, sizeof output);
	expected = "";
}

// TEST_GROUP()에 대하여, 메모리 해제 등의 정리를 한다. 여기선 정리할 게 없다.
TEST_TEAR_DOWN(sprintf)
{
}

// 다음 두 도움 함수로 중복을 줄인다
static void	expect(const char *s)
{
	expected = s;
}

static void	given(int charsWritten)
{
	TEST_ASSERT_EQUAL(strlen(expected), charsWritten);
	TEST_ASSERT_EQUAL_STRING(expected, output);
	TEST_ASSERT_BYTES_EQUAL(0xaa, output[strlen(expected) + 1]);
}

// test fixture를 통해 기존 TEST()의 내용이 간결해졌다.
TEST(sprintf, NoFormatOperations)
{
	expect("hey");
	given(sprintf(output, "hey"));
}

TEST(sprintf, InsertString)
{
	expect("Hello World\n");
	given(sprintf(output, "Hello %s\n", "World"));
}
