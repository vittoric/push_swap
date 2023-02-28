#include "push_swap.h"

void    asiign_check(t_node *stack)
{
    int current_pos;
    t_node	*aux;

	aux = stack;
    current_pos = stack->num;
    while(aux)
    {
        assign_position(stack, current_pos);
        current_pos = stack->next->num;
        aux = aux->next;
    }
}