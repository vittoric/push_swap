/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:47:43 by vcodrean          #+#    #+#             */
/*   Updated: 2023/02/28 16:27:36 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_node *stack)
{
	t_node	*aux;
	int		max;

	max = stack->num;
	aux = stack->next;
	while (aux)
	{
		if (aux->num > max)
			max = aux->num;
		aux = aux->next;
	}
	return (max);
}

int	find_min(t_node *stack)
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
