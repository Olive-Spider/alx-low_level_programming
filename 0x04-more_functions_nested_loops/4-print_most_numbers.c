#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0 to 9
 * does not print 2 and 4
 * Return: 0
*/
void print_most_numbers(void)
{
char number;
for (number = '0'; number <= '9'; number++)
{
if (number != '2' && number != '4')
{
_putchar(number);
}
}
_putchar('\n');
}
