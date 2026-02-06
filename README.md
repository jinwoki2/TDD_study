교재: 임베디드 C를 위한 TDD

권장 prerequisite: OOP in C 

얻을 수 있는 skill:
- Test Harness(framwork) 사용법 (Unity, CppUTest)
- TDD in C
- TDD in Embedded C
- OOP in C
- SOLID in C

필수 사항
- gitsubmodule을 통해 Unity를 불러온다
	- git submodule add <저장소_URL> <경로>
	- git submodule add git@github.com:ThrowTheSwitch/Unity.git .

책을 그대로 따라가면 문제가 없지만 Makefile을 직접 작성하고 싶을 땐 어려움이 생긴다.
직접 make를 실행하기 위해서는 다음과 같이 Makefile 안에 Unity를 컴파일하도록 작성해야 한다.

```Makfile
NAME		=	test
CC			=	
CFLAGS		=	

UNITY_ROOT	=	Unity의 경로

INCLUDES	=	-I. \
				-I$(UNITY_ROOT)/src \
				-I$(UNITY_ROOT)/extras/fixture/src \
				-I$(UNITY_ROOT)/extras/memory/src

UNITY_SRCS	=	$(UNITY_ROOT)/src/unity.c \
				$(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
				$(UNITY_ROOT)/extras/memory/src/unity_memory.c

MAIN_SRCS	=

SRCS		=	$(UNITY_SRCS) \
				$(MAIN_SRCS)

```