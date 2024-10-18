# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efaustin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 14:18:59 by efaustin          #+#    #+#              #
#    Updated: 2024/10/01 14:19:01 by efaustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= cc
CFLAGS	= -Wall -Werror -Wextra

SRCS 	= src/main.c \
		src/mv_push.c \
		src/mv_reverse.c \
		src/mv_rotate.c \
		src/mv_swap.c \
		src/sort.c \
		src/stack.c \
		src/start.c \
		utils/do_move.c \
		utils/ft_split.c \
		utils/ft_substr.c \
		utils/input.c \
		utils/lft_utils1.c \
		utils/lft_utils2.c \
		utils/position.c \
		utils/utils.c \

OBJS 	= ${SRCS:.c=.o}
RM 		= rm -rf

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
