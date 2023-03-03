/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_column.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:28:25 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 12:06:27 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_column(t_node *stack_a, t_node *stack_b)
{
	t_node	*aux_a;
	t_node	*aux_b;

	aux_a = stack_a;
	aux_b = stack_b;
	while (aux_a || aux_b)
	{
		if (aux_a && aux_b)
		{
			ft_printf("%d         %d\n", aux_a->num, aux_b->num);
			aux_a = aux_a->next;
			aux_b = aux_b->next;
		}
		else if (aux_a && !aux_b)
		{
			ft_printf("%d               \n", aux_a->num);
			aux_a = aux_a->next;
		}
		else if (!aux_a && aux_b)
		{
			ft_printf(".       %d\n", aux_b->num);
			aux_b = aux_b->next;
		}
	}
	ft_printf("____________  ____________\nstack a       stack b\n");
}
