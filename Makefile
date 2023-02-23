# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 15:12:38 by vcodrean          #+#    #+#              #
#    Updated: 2023/02/23 19:45:41 by vcodrean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = push_swap2.c swap_first_two.c rotate_revers.c\
		ps_lst.c ps_push.c check_order.c
OBJS = $(SRCS:.c=.o)
EXEC = prgm

RM = rm -f

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(EXEC)

fclean: clean
	$(RM) all
	
re: fclean

.PHONY: all clean fclean re