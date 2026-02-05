# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/05 23:05:04 by jinwoki2          #+#    #+#              #
#    Updated: 2026/02/05 23:18:02 by jinwoki2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# 변수 설정
NAME = sprinf_test
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

# 소스 파일 및 목적 파일 설정
SRCS =	01_SprintTEST.c \
		02_SprintfTestRunner.c \
		03_AllTests.c

OBJS = $(SRCS:.c=.o)

# 기본 규칙
all: $(NAME)

# 실행 파일 생성 규칙
$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $@ $^

# .c 파일을 .o 파일로 컴파일하는 패턴 규칙
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

# 정리 규칙
clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

# 재빌드 규칙
re: fclean all

# 가짜 타켓 명시
.PHONY: all clean fclean re