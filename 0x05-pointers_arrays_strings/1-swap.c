#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: int to be swaped
 * @b: int to be swaped
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
