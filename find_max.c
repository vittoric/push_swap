/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:47:43 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/01 09:46:52 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_node *stack)
{
	t_node	*aux;
	unsigned int		max;

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
	aux = stack->next;
	while (aux)
	{
		if (aux->num < min)
			min = aux->num;
		aux = aux->next;
	}
	return (min);
}
