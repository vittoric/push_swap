//#include "push_swap.h"
#include <stdio.h>
int dec_to_bin (int decimal)
{
	int binary[32];
    int index;
	int i;

	index = 0;
	while (decimal > 0) {
        binary[index++] = decimal & 1;
        decimal >>= 1;
    }
	i = index - 1;
    /*while (i >= 0) {
        printf("%d", binary[i]);
        i--;
    }*/
	return(index);
}
