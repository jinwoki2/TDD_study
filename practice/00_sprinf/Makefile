# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/05 23:05:04 by jinwoki2          #+#    #+#              #
#    Updated: 2026/02/06 20:46:21 by jinwoki2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# 변수 설정
NAME		=	sprintf_test
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g

# Unity 프레임워크 설정
UNITY_ROOT	=	/home/jinwoki2/Desktop/github/circle_4/TDD_study/Unity

INCLUDES	=	-I. \
				-I$(UNITY_ROOT)/src \
				-I$(UNITY_ROOT)/extras/fixture/src \
				-I$(UNITY_ROOT)/extras/memory/src

UNITY_SRCS	=	$(UNITY_ROOT)/src/unity.c \
				$(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
				$(UNITY_ROOT)/extras/memory/src/unity_memory.c \

# 소스 파일
MAIN_SRCS	=	01_SprintfTest.c \
				02_SprintfTestRunner.c \
				03_AllTests.c

# 소스 파일 및 목적 파일 설정
SRCS		=	$(UNITY_SRCS) \
				$(MAIN_SRCS)

OBJ_DIR		=	OBJ
OBJS		=	$(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))

vpath %.c $(sort $(dir $(SRCS)))

############################################################################################

# 기본 규칙
all				:	$(NAME)
					./$(NAME) -v

# 실행 파일 생성 규칙
$(NAME)			:	$(OBJS)
					$(CC) $(CFLAGS) -o $@ $^

# .c 파일을 .o 파일로 컴파일하는 패턴 규칙
$(OBJ_DIR)/%.o	:	%.c
					@mkdir -p $(OBJ_DIR)
					$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# 정리 규칙
clean			:
					rm -rf $(OBJ_DIR)

fclean			:	clean
					rm -f $(NAME)

# 재빌드 규칙
re				:	fclean all

# 가짜 타켓 명시
.PHONY			:	all clean fclean re