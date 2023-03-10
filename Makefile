# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 15:12:38 by vcodrean          #+#    #+#              #
#    Updated: 2023/03/03 15:43:55 by vcodrean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = push_swap

DEL_LINE =		\033[2K
ITALIC =		\033[3m
BOLD =			\033[1m
DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
GREEN =			\033[0;92m
YELLOW =		\033[0;93m
BLUE =			\033[0;94m
MAGENTA =		\033[0;95m
CYAN =			\033[0;96m
WHITE =			\033[0;97m
BLACK =			\033[0;99m
ORANGE =		\033[38;5;209m
BROWN =			\033[38;2;184;143;29m
DARK_GRAY =		\033[38;5;234m
MID_GRAY =		\033[38;5;245m
DARK_GREEN =	\033[38;2;75;179;82m
DARK_YELLOW =	\033[38;5;143m

SRCS = push_swap.c swap_first_two.c rotate_revers.c\
		ps_lst.c ps_push.c check_order.c ps_utils.c ps_bit.c\
		algorithm3.c dec_to_bin.c find_max.c assign_position.c\
		radix_algorithm.c print_column.c error.c create_col.c\
		double_ckeck.c
		

FT_PRINTF_PATH = ft_printf/
LIBFT_PATH = libft/

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
RM = rm -f

%.o: %.c
	@echo "${BLUE} ◎ $(BROWN)Compiling   ${MAGENTA}→   $(CYAN)$< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(FT_PRINTF_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(LIBFT_PATH)

OBJS = ${SRCS:.c=.o}

all: $(EXEC)

$(EXEC): $(OBJS)
	@make -C $(FT_PRINTF_PATH) --silent
	@make -C $(LIBFT_PATH) --silent
	@$(CC) $(CFLAGS) ${SRCS} -o $(EXEC)  -I./libft -L./libft -lft -I./ft_printf -L./ft_printf -lftprintf
	@echo "\n$(GREEN) Created $(EXEC) ✓ $(DEF_COLOR)\n"

clean:
	$(RM) $(OBJS)
	@make -C $(FT_PRINTF_PATH) clean --silent
	@echo "\n${BLUE} ◎ $(RED)All objects cleaned successfully ${BLUE}◎$(DEF_COLOR)\n"

fclean:  clean
	@$(RM) $(EXEC)
	@$(RM) $(OBJS)
	@make -C $(FT_PRINTF_PATH) fclean --silent
	@make -C $(LIBFT_PATH) fclean --silent
	@echo "\n${BLUE} ◎ $(RED)All objects and executable cleaned successfully${BLUE} ◎$(DEF_COLOR)\n"
	
re: fclean all

.PHONY: all clean fclean re