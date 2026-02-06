# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/06 22:43:16 by jinwoki2          #+#    #+#              #
#    Updated: 2026/02/06 23:02:30 by jinwoki2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	LedDriver_test
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g

UNITY_ROOT	=	/home/jinwoki2/Desktop/github/circle_4/TDD_study/Unity

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

OBJ_DIR		=	OBJ
OBJS		=	$(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))

####################################################################333

all			:	$(NAME)
				./$(NAME) -v

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) -o $@ $^

