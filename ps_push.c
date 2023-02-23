/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:09:36 by vcodrean          #+#    #+#             */
/*   Updated: 2023/02/23 16:15:21 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ps_push(t_node **column1, t_node **column2)
{
    t_node  *aux;
    
    if (column1)
    {
        aux = *column1;
        *column1 = (*column1)->next;
        ps_add_front(&*column2, aux);
    }
}