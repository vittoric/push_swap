/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_col.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:04:23 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 12:01:08 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	creat_col(t_node **stack, int argc, char **argv)
{
	char	**str;
	int		i;
	int		a;

	i = 1;
	a = 0;
	while (i < argc)
	{
		str = ft_split(argv[i], ' ');
		a = 0;
		while (str[a])
		{
			if (check_argv(str[a]) == 1)
				ps_add_back(stack, ps_lst_new(ft_atoi(str[a])));
			else
				return (1);
			free(str[a]);
			a++;
		}
		i++;
		free(str);
	}
	return (0);
}
