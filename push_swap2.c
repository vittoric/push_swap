#include "push_swap.h"

int main(int argc, char **argv)
{
    t_node *stack_a = NULL;
    t_node *stack_b = NULL;

    int i = 1;
    while (i < argc) 
	{
       int num = atoi(argv[i]);

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
    printf("\n stack_a:\n");
    while (current != NULL) 
   	{
        printf("%d\n", current->num);
        current = current->next;
    }
    printf("La lista esta ordenada si es 1: %d\n",check_order(stack_a));

    // Ejemplo de uso de push: mueve el primer elemento de stack_b a stack_a
    ps_push(&stack_a, &stack_b);
    

    // Imprime los números almacenados en stack_a después de hacer push
    current = stack_a;
    printf("\nDespués de push stack_a:\n");
    while (current != NULL) 
	{
        printf("%d\n", current->num);
        current = current->next;
    }
    
    current = stack_b;
    printf("\n stack_b:\n");
    while (current != NULL) 
	{
        printf("%d ", current->num);
        current = current->next;
    }

    // Libera la memoria asignada a los nodos de los stacks
    ps_lst_clear(&stack_a);
    ps_lst_clear(&stack_b);

    return 0;
}
