/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_revers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:42:00 by vcodrean          #+#    #+#             */
/*   Updated: 2023/02/23 19:30:29 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **top)
{
	t_node	*current;

	current = *top;
	// No hace nada si el stack está vacío o sólo tiene un elemento
	if (*top == NULL || (*top)-> next == NULL)
		return ;
	*top = (*top)-> next;
	ps_add_back(top, ps_lst_new(current->num));
   //free(current);
	}

void	rr_rotate(t_node **top_1, t_node **top_2)
{
	rotate(&*top_1);
	rotate(&*top_2);
}
void	revers_rotate(t_node **top)
{
	t_node *aux = *top;
	
	if (*top == NULL || (*top)->next == NULL)
		return;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->next->next = *top;
	*top = aux->next;
	aux->next = NULL;
	//ps_add_front(top, aux);
}

void	rrr_rotate(t_node **top_1, t_node **top_2)
{
	revers_rotate(&*top_1);
	revers_rotate(&*top_2);
}