/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pair.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:11:17 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/01 11:39:59 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_pair(t_node **stack_a, t_node **stack_b, int i)
{ 
	if (((*stack_a)->position >> i & 1) == 1)
		rotate (stack_a, 'a');
	else
		ps_push(stack_a, stack_b, 'b');
}
