#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be checked
 * Return: 0
*/
void puts_half(char *str)
{
int length = strlen(str);
int start_index;

if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2;
}
while (str[start_index] != '\0')
{
putchar(str[start_index]);
start_index++;
}
putchar('\n');
}
