#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase
 * followed by a new line
 * only use _putchar twice
*/
void print_alphabet(void)
{
int i;
for (i = 0; i < 26; i++)
{
putchar('a' + i);
}
putchar('\n');
}
