#include <stdio.h>

int dec_to_bin(int decimal);

int main() {
    int decimal = 26; // número decimal a convertir
    int binary = dec_to_bin(decimal);

    /*
    t_node *current = stack_a;
    while (current != NULL) 
	{   
        ft_printf("%d\n",current->num);
        current = current->next;
    }
     */

   // printf("El número decimal %d en binario es %d\n", decimal, binary);

    return 0;
}