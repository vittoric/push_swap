#include "push_swap.h"

void	ps_pair(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a)->num % 2 == 0)
		rotate (stack_a, 'a');
	else
		ps_push(stack_a, stack_b, 'b');
}
