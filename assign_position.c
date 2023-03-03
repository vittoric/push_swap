/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:50:31 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 11:59:23 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_position(t_node *stack, int value)
{
	t_node	*aux;

	aux = stack;
	while (aux)
	{
		if (aux->num >= value)
			aux->position++;
		aux = aux->next;
	}
}

void	assign_check(t_node *stack)
{
	int		current_pos;
	t_node	*aux;

	aux = stack;
	while (aux)
	{
		current_pos = aux->num;
		assign_position(stack, current_pos);
		aux = aux->next;
	}
}
