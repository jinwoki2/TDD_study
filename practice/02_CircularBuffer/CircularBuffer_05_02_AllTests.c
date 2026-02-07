/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CircularBuffer_05_02_AllTests.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:13:28 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/07 19:14:38 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"

static void	RunAllTests(void)
{
	RUN_TEST_GROUP(CircularBuffer);
}

int main(int argc, char const *argv[])
{
	return (UnityMain(argc, argv, RunAllTests));
}
