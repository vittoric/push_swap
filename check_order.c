/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:46:06 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 12:00:11 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(t_node *top)
{
	t_node	*aux;

	aux = top;
	if (!aux || !aux->next)
		return (1);
	while (aux->next != NULL)
	{
		if (aux->num > (aux->next)->num)
			return (0);
		aux = aux->next;
	}
	return (1);
}
