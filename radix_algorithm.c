/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:02:23 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 15:35:54 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_algorithm(t_node **stack_a, t_node **stack_b)
{
	int		index;
	int		size_list;
	int		binary;
	int		h;

	size_list = ps_lst_size(*stack_a);
	binary = dec_to_bin(find_max(*stack_a));
	h = 0;
	while (h < binary)
	{
		index = 0;
		while (index < size_list)
		{
			ps_bit(stack_a, stack_b, h);
			index++;
		}
		h++;
		while (*stack_b)
			ps_push(stack_b, stack_a, 'a');
	}
}
