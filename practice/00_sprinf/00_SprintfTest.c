/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_SprintfTest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:11:00 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/05 23:04:54 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "unity.h"

TEST(sprintf, NoFormatOperations)
{
	char	output[5];
	memeset(output, 0xaa, sizeof(output));

	TEST_ASSERT_EQUAL(3, sprintf(output, "hey"));
	TEST_ASSERT_EQUAL_STRING("hey", output);
	TEST_ASSERT_BYTES_EQUAL(0xaa, output[4]);
}

TEST(sprintf, InsertString)
{
	char	output[20];
	memset(output, 0xaa, sizeof output);

	TEST_ASSERT_EQUAL(12, sprintf(output, "Hello %s\n", "World"));
	TEST_ASSERT_EQUAL_STRING("Hello World\n", output);
	TEST_ASSERT_BYTES_EQUAL(0xaa, output[13]);
}
