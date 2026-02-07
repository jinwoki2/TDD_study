# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/06 22:43:16 by jinwoki2          #+#    #+#              #
#    Updated: 2026/02/07 17:49:13 by jinwoki2         ###   ########.fr        #
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

MAIN_SRCS	=	LedDriver_05_00_Test.c \
				LedDriver_05_01_TestRunner.c \
				LedDriver_05_02_AllTests.c \
				LedDriver_00.c

SRCS		=	$(UNITY_SRCS) \
				$(MAIN_SRCS)

OBJ_DIR		=	OBJ
OBJS		=	$(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))

vpath %.c $(sort $(dir $(SRCS)))

####################################################################333

all				:	$(NAME)
					./$(NAME) -v

$(NAME)			:	$(OBJS)
					$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o	:	%.c
					@mkdir -p $(OBJ_DIR)
					$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@


clean			:
					rm -rf $(OBJ_DIR)

fclean			:	clean
					rm -f $(NAME)

re				:	fclean all

.PHONY			: all clean fclean re