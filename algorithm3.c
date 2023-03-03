/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:31:47 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 15:37:01 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
 * inst1: 2 1 3 
 * inst2: 3 2 1
 * inst3: 3 1 2
 * inst4: 1 3 2
 * inst5: 2 3 1
 *
 1 (*t_node)->num
 2 (*t_node)->next->num
 3 (*t_node)-next->next->num
 */

void	organize3(t_node **head_a, int inst)
{
	if (inst == 1)
		swap_first_two(head_a, 'a');
	else if (inst == 2)
	{
		swap_first_two(head_a, 'a');
		revers_rotate(head_a, 'a');
	}
	else if (inst == 3)
		rotate(head_a, 'a');
	else if (inst == 4)
	{
		swap_first_two(head_a, 'a');
		rotate(head_a, 'a');
	}
	else if (inst == 5)
		revers_rotate(head_a, 'a');
}

void	algorithm3(t_node **head_a)
{
	if ((*head_a)->num > (*head_a)->next->num && \
		(*head_a)->next->num < (*head_a)->next->next->num && \
		(*head_a)->next->next->num > (*head_a)->num)
		organize3(head_a, 1);
	else if ((*head_a)->num > (*head_a)->next->num && \
			(*head_a)->next->num > (*head_a)->next->next->num && \
			(*head_a)->next->next->num < (*head_a)->num)
		organize3(head_a, 2);
	else if ((*head_a)->num > (*head_a)->next->num && \
			(*head_a)->next->num < (*head_a)->next->next->num && \
			(*head_a)->next->next->num < (*head_a)->num)
		organize3(head_a, 3);
	else if ((*head_a)->num < (*head_a)->next->num && \
			(*head_a)->next->num > (*head_a)->next->next->num && \
			(*head_a)->next->next->num > (*head_a)->num)
		organize3(head_a, 4);
	else if ((*head_a)->num < (*head_a)->next->num && \
			(*head_a)->next->num > (*head_a)->next->next->num && \
			(*head_a)->next->next->num < (*head_a)->num)
		organize3(head_a, 5);
}

void	algorithm5(t_node **stack_a, t_node **stack_b)
{
	while (ps_lst_size(*stack_a) > 3)
	{
		while (find_num(*stack_a, get_min_value(*stack_a)) != 0)
		{
			if (find_num(*stack_a, get_min_value(*stack_a))
				<= (ps_lst_size(*stack_a) / 2))
				rotate(stack_a, 'a');
			else
				revers_rotate(stack_a, 'a');
		}
		if (find_num(*stack_a, get_min_value(*stack_a)) == 0)
			ps_push(stack_a, stack_b, 'b');
	}
	algorithm3(stack_a);
	while (*stack_b)
		ps_push(stack_b, stack_a, 'a');
}

void	select_algorithm(t_node **stack_a, t_node **stack_b)
{
	if (ps_lst_size(*stack_a) == 2)
		swap_first_two(stack_a, 'a');
	else if (ps_lst_size(*stack_a) > 2 && ps_lst_size(*stack_a) <= 5)
		algorithm5 (&*stack_a, &*stack_b);
	else if (ps_lst_size(*stack_a) > 5)
	{
		assign_check(*stack_a);
		radix_algorithm(&*stack_a, &*stack_b);
	}
}
