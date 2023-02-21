#include "push_swap.h"

void swap_first_two (t_node **top)
{
// Verifica si hay al menos dos elementos en el stack
	if (*top == NULL || (*top) -> next == NULL)
		return;
 // Guarda los punteros a los primeros dos nodos
	t_node *first = *top;
	t_node *second = (*top) -> next;
 // Actualiza los punteros para que el segundo nodo se convierta en el nuevo tope
	*top = second;
// Intercambiar los punteros next de los dos nodos para invertir el orden
	t_node *temp = second -> next;
	second -> next = first;
	first -> next = temp;
}
