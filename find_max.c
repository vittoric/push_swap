/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:47:43 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 12:08:29 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_node *stack)
{
	t_node			*aux;
	unsigned int	max;

	max = stack->position;
	aux = stack->next;
	while (aux)
	{
		if (aux->position > max)
			max = aux->position;
		aux = aux->next;
	}
	return (max);
}

int	get_min_value(t_node *stack)
{
	t_node	*aux;
	int		min;

	min = stack->num;
	aux = stack;
	while (aux->next)
	{
		if (aux->next->num < min)
			min = aux->next->num;
		aux = aux->next;
	}
	return (min);
}

int	find_num(t_node *stack, int value)
{
	t_node	*aux;
	int		index;

	index = 0;
	aux = stack;
	while (aux->next != NULL)
	{
		if (aux->num == value)
			return (index);
		index++;
		aux = aux->next;
	}
	return (index);
}

int	ps_lst_size(t_node *column)
{
	int		i;
	t_node	*aux;

	i = 0;
	if (!column)
		return (0);
	aux = column;
	while (aux)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}
