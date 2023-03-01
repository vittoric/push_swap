/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:42:00 by vcodrean          #+#    #+#             */
/*   Updated: 2023/03/01 11:03:50 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate (t_node **top)
{
    t_node *current;
   
    if (*top == NULL || (*top)-> next == NULL)
        return ;
    current = *top;
    while (current->next != NULL)
        current = current-> next;
    current-> next = *top;
    *top = (*top)-> next;
    current->next->next = NULL;
    
   current = current->next;
   current->next = (*top)->next;
}
