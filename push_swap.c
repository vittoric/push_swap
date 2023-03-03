/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:52:59 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 15:30:51 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (1 < argc)
	{
		if (creat_col(&stack_a, argc, argv) == 1 || double_ckeck(stack_a) == 1)
		{
			error(1);
			return (0);
		}
		if (check_order(&*stack_a))
			return (0);
		else
			select_algorithm(&stack_a, &stack_b);
	}
	ps_lst_clear(&stack_a);
	ps_lst_clear(&stack_b);
	return (0);
}
