/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_AllTests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 23:24:39 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/06 23:28:56 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"

static void	RunAllTests(void)
{
	RUN_TEST_GROUP(LedDriver);
}

int main(int argc, char const *argv[])
{
	return (UnityMain(argc, argv, RunAllTests));
}
