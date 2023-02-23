/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:18:41 by vcodrean          #+#    #+#             */
/*   Updated: 2023/02/23 16:14:12 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct node{
	int	num;
	struct node	*next;
}	t_node;

void	swap_first_two(t_node **top);
void	rotate(t_node **top);
t_node	*ps_lst_last(t_node *first);
void	ps_add_back(t_node **column, t_node *new);
t_node	*ps_lst_new(int num);
void	revers_rotate(t_node **top);
void	ps_add_front(t_node **column, t_node *new);
void	ps_lst_clear(t_node **column);
void	ps_push(t_node **column1, t_node **column2);

#endif