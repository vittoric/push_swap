#include "push_swap.h"

int main(int argc, char **argv)
{
    t_node *stack_a = NULL;
    t_node *stack_b = NULL;
    //char	** sp;
    //int i = 1;
    //int a = 0;
    if (1 < argc) 
	{
        creat_col(&stack_a, argc, argv);
        /*
        sp = ft_split(argv[i], ' ');
        a = 0;
        while(sp[a])
        {         
            ps_add_back(&stack_a, ps_lst_new(ft_atoi(sp[a])));  
            free(sp[a]);
            a++;
        }*/
        //i++;
        //free(sp);      

    if(ps_lst_size(stack_a) <= 6)
        algorithm5(&stack_a, &stack_b);
    else if(ps_lst_size(stack_a) > 6)
    {
        assign_check(stack_a);
        radix_algorithm(&stack_a, &stack_b);
    }
    }
   // ft_printf("\n\n");

   // ft_printf("list size:%d \n\n",ps_lst_size(stack_a));

  
/*
    t_node *current = stack_a;
    while (current != NULL) 
	{   
        ft_printf("%d\n",current->num);
        current = current->next;
    }
     */
    ps_lst_clear(&stack_a);
    ps_lst_clear(&stack_b);

    return 0;
}
