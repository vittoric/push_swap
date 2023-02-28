/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:50:31 by vcodrean          #+#    #+#             */
/*   Updated: 2023/02/28 20:11:03 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_position(t_node *stack, int value)
{
	t_node	*aux;

	aux = stack;
	while (aux)
	{
		if(aux->num >= value)
			aux->position+=1;
		aux = aux->next;
	}
}
