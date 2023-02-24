/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_first_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:35:40 by vcodrean          #+#    #+#             */
/*   Updated: 2023/02/24 17:25:53 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_first_two(t_node **top, char c)
{
	t_node	*first;
	t_node	*second;
	t_node	*temp;
// Verifica si hay al menos dos elementos en el stack
	if (*top == NULL || (*top)-> next == NULL)
		return ;
 // Guarda los punteros a los primeros dos nodos
	first = *top;
	second = (*top)-> next;
 // Actualiza los punteros para que el segundo nodo se convierta en el nuevo tope
	*top = second;
// Intercambiar los punteros next de los dos nodos para invertir el orden
	temp = second -> next;
	second -> next = first;
	first -> next = temp;
	if (c == 'a' || c == 'b')
		ft_printf("s%c\n", c);
}

void	ss_first_two(t_node **top_a, t_node **top_b)
{
	swap_first_two(&*top_a, 's');
	swap_first_two(&*top_b, 's');
	ft_printf("ss\n");
}