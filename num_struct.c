#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
} node;

int main(int argc, char **argv)
{
    node *head = NULL;
    node *current = NULL;
    int i;
   	i = 1;

    // Lee cada número pasado por la línea de comando y almacena en un nodo separado
    while (i < argc) 
	{
       int num = atoi(argv[i]);

        // Crea un nuevo nodo
        node *new_node = malloc(sizeof(node));
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
    while (current != NULL) 
	{
        printf("%d\n", current->num);
        current = current->next;
    }

    // Libera la memoria asignada a la lista enlazada
    current = head;
    while (current != NULL) 
	{
        node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
