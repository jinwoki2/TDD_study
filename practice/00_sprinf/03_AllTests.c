/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_AllTests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:53:34 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/05 23:07:12 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"

// RUN_TEST_GROUP는 TEST_GROUP_RUNNER()로 정의되는 함수를 호출한다.
// main()에서 실행되기를 원하는 TEST_GROUP_RUNNER()는 RUN_TEST_GROUP()로 지정되어야 한다.
static void RunAllTests(void)
{
	RUN_TEST_GROUP(sprintf);
}

int main(int argc, char const *argv[])
{
	return (UnityMain(argc, argv, RunAllTests));
}
