/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:20:12 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 15:26:18 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_add_front(t_node **column, t_node *new)
{
	if (new)
	{
		new->next = *column;
		*column = new;
	}
}

t_node	*ps_lst_last(t_node *first)
{
	t_node	*aux;

	aux = first;
	if (!first)
		return (0);
	while (aux->next != 0)
		aux = aux->next;
	return (aux);
}

t_node	*ps_lst_new(long long num)
{
	t_node	*new_elem;

	new_elem = malloc(sizeof(t_node));
	if (!new_elem)
		return (NULL);
	new_elem->num = num;
	new_elem->next = NULL;
	new_elem->position = 0;
	return (new_elem);
}

void	ps_add_back(t_node **column, t_node *new)
{
	t_node	*aux;

	if (*column)
	{
		aux = ps_lst_last(*column);
		aux->next = new;
	}
	else
		*column = new;
}

void	ps_lst_clear(t_node **column)
{
	t_node	*aux;

	aux = *column;
	while (*column)
	{
		aux = (*column)->next;
		free(*column);
		*column = aux;
	}
	free(*column);
}
