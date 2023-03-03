/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_bin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:01:41 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/03 12:04:52 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dec_to_bin(int decimal)
{
	int		binary[32];
	int		index;
	int		i;

	index = 0;
	while (decimal > 0)
	{
		binary[index++] = decimal & 1;
		decimal >>= 1;
	}
	i = index - 1;
	return (index);
}
