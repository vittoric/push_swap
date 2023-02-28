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

        // Agrega el nuevo nodo al stack a
        ps_add_back(&stack_a, new_node);

        i++;
    }

    // Imprime los números almacenados en el stack a
    t_node *current = stack_a;
    /*ft_printf("\n stack_a:\n");
    while (current != NULL) 
   	{
        ft_printf("%d\n", current->num);
        current = current->next;
    }*/

    asiign_check(stack_a);
    while (stack_a != NULL) 
	{   
        ft_printf("Nmero:%d ----> su posicion:%d\n",stack_a->num, stack_a->position);
        stack_a = stack_a->next;
    }
    
  
        int size_list = ps_lst_size(stack_a);
        int index = 0;
    /*if (size_list == 3)
    {
            algorithm3(&current);
    } else
        ft_printf("Hola caracola");*/
    int min = find_min(current);
    
    int max = find_max(current);
    int binary = dec_to_bin(max);
    int h = 0;
    
    while (h < binary)
    {
        index = 0;
        while (index < size_list) 
        {
            ps_pair(&stack_a, &stack_b, h);
            index++;
        }
        h++;
        ft_printf("\n HHHH: %d", h);
    //devolver todos los b a a
    //int x = 0;
    //int size_listb = ps_lst_size(stack_b);
    while (stack_b) 
	{
        ps_push(&stack_b, &stack_a, 'a');
       // stack_b = stack_b->next;
        //x++;
    }
    }

    

    
   ft_printf("\nMAX: %d\n", max);
   ft_printf("\nMIN: %d\n", min);
   
   ft_printf("\nTamanñ en bits de MAX NUM : %d\n", dec_to_bin(max));
   
   // ft_printf("Total movimientos: %d\n", index);
    ft_printf("\nDespués de buscar pares stack_a:\n");

    
    //ft_printf("La lista esta ordenada si es 1: %d\n",check_order(stack_a));

    // Ejemplo de uso de push: mueve el primer elemento de stack_b a stack_a
    //ps_push(&stack_a, &stack_b, 'a');
    

    // Imprime los números almacenados en stack_a después de hacer push
   // current = stack_a;
   // ft_printf("\nDespués de push stack_a:\n");
    while (stack_a != NULL) 
	{
        ft_printf("%d\n", stack_a->num);
        stack_a = stack_a->next;
    }
    
    current = stack_b;
    ft_printf("\n stack_b:\n");
    while (current != NULL) 
	{
        ft_printf("%d ", current->num);
        current = current->next;
    }
    /*ft_printf("La lista esta ordenada si es 1: %d\n",check_order(stack_b));
    rrr_rotate(&stack_a, &stack_b);
    ss_first_two(&stack_a, &stack_b);
    rr_rotate(&stack_a, &stack_b);*/



    // Libera la memoria asignada a los nodos de los stacks
    ps_lst_clear(&stack_a);
    ps_lst_clear(&stack_b);

    return 0;
}
