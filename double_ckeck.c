/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_ckeck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:42:32 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 15:36:17 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	double_ckeck(t_node *stack)
{
	t_node	*temp;
	t_node	*temp2;

	temp = stack;
	while (temp)
	{
		if (temp->num < -2147483648 || (long long) temp->num > 2147483647)
		{
			return (1);
		}
		temp2 = temp->next;
		while (temp2)
		{
			if (temp->num == temp2->num)
				return (1);
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
	return (0);
}

int	check_argv(char *str)
{
	int	index;

	index = 0;
	if ((str[index] == '-' || str[index] == '+') && (ft_strlen(str) > 1))
		index++;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}
