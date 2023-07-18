#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print the alphabet 10 times
 * in lowercase
 *
*/
void print_alphabet_x10(void)
{
char lowercase;
int i;
for (i = 0; i < 10; i++)
{
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
putchar('\n');
}
}
