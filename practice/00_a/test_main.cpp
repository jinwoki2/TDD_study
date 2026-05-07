/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 00:56:36 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/05/08 02:00:45 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CppUTest/CommandLineTestRunner.h"

// C언어 헤더는 반드시 extern "C" 안에 포함해야 네임 맨글링(Name Mangling) 오류가 발생하지 않습니다.
extern "C" {
    #include "my_math.h"
}

// 1. 테스트 그룹 정의
TEST_GROUP(MyMathGroup)
{
    void setup() {
        // 각 테스트가 실행되기 전에 초기화할 내용이 있다면 여기에 작성합니다.
    }
    void teardown() {
        // 각 테스트가 끝난 후 메모리 해제 등을 할 때 사용합니다.
    }
};

// 2. 실제 테스트 케이스 작성
TEST(MyMathGroup, TestAddFunction)
{
    // ft_add(2, 3)의 결과가 5가 맞는지 확인(Assert)합니다.
    LONGS_EQUAL(5, ft_add(2, 3));
}

TEST(MyMathGroup, TestAddNegativeNumbers)
{
    LONGS_EQUAL(-5, ft_add(-2, -3));
}

// 3. 테스트 실행을 위한 main 함수
int main(int argc, char** argv)
{
    return RUN_ALL_TESTS(argc, argv);
}
