#include "push_swap.h"


int main(int argc, char **argv)
{
    t_node *head = NULL;
    t_node *current = NULL;
    //t_node *b;
    int i;
   	i = 1;

    // Lee cada número pasado por la línea de comando y almacena en un nodo separado
    while (i < argc) 
	{
       int num = atoi(argv[i]);

        // Crea un nuevo nodo
        t_node *new_node = malloc(sizeof(t_node));
        new_node->num = num;
        new_node->next = NULL;

        // Agrega el nuevo nodo a la lista enlazada
        if (current == NULL) 
		{
            // La lista está vacía, establece el nuevo nodo como la cabeza
            head = new_node;
            current = new_node;
        } 
		else 
		{
            // Agrega el nuevo nodo al final de la lista
            current->next = new_node;
            current = new_node;
        }

        i++;
    }

    // Imprime los números almacenados en la lista enlazada en una columna
    current = head;
   /*  while (current != NULL) 
	{
        printf("%d\n", current->num);
        current = current->next;
    }
     printf("\n\nh");*/

	//swap_first_two(&current);
    //rotate(&current);
    revers_rotate(&current);
    while (current != NULL) 
	{
        printf("%d\n", current->num);
        current = current->next;
    }

    printf("_____\n  a \n");

    // Libera la memoria asignada a la lista enlazada
    current = head;
    while (current != NULL) 
	{
        t_node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
