/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:18:41 by vcodrean          #+#    #+#             */
/*   Updated: 2023/02/28 17:01:48 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "ft_printf.h"

typedef struct node{
	int				num;
	unsigned int	position;
	struct node		*next;
}	t_node;

void		swap_first_two(t_node **top, char c);
void		rotate(t_node **top, char c);
t_node		*ps_lst_last(t_node *first);
void		ps_add_back(t_node **column, t_node *new);
t_node		*ps_lst_new(int num);
void		revers_rotate(t_node **top, char c);
void		ps_add_front(t_node **column, t_node *new);
void		ps_lst_clear(t_node **column);
void		ps_push(t_node **column1, t_node **column2, char c);
void		ss_first_two(t_node **top_a, t_node **top_b);
void		rr_rotate(t_node **top_1, t_node **top_2);
void		rrr_rotate(t_node **top_1, t_node **top_2);
int			check_order(t_node *top);
long int	ps_atoi(const char *str);
void		ps_pair(t_node **stack_a, t_node **stack_b, int i);
int			ps_lst_size(t_node *column);
void		organize3(t_node **head_a, int inst);
void		algorithm3(t_node **head_a);
int			dec_to_bin(int decimal);
int			find_max(t_node *stack);
int			find_min(t_node *stack);

#endif
