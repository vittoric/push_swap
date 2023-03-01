#include "push_swap.h"

int main(int argc, char **argv)
{
    t_node *stack_a = NULL;
    t_node *stack_b = NULL;

    int i = 1;
    while (i < argc) 
	{
       int num = ps_atoi(argv[i]);

        // Crea un nuevo nodo
        t_node *new_node = malloc(sizeof(t_node));
        new_node->num = num;
        new_node->next = NULL;
        new_node->position = 0;
        // Agrega el nuevo nodo al stack a
        ps_add_back(&stack_a, new_node);

        i++;

        
    }
    
    //ft_printf("list size:%d \n",ps_lst_size(stack_a));
    if(ps_lst_size(stack_a) == 5)
        algorithm5(&stack_a, &stack_b);
    /*t_node *current = stack_a;
    assign_check(stack_a);
    while (current != NULL) 
	{   
        ft_printf("Nmero:%d ----> su posicion:%d\n",current->num, current->position);
        current = current->next;
    }
     
    radix_algorithm(&stack_a, &stack_b);*/
    
    /*if (size_list == 3)
    {
            algorithm3(&current);
    } else
        ft_printf("Hola caracola");*/
    
    //print_column(stack_a, stack_b);
    ps_lst_clear(&stack_a);
    ps_lst_clear(&stack_b);

    return 0;
}
