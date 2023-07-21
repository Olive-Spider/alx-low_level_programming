#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0
*/
void more_numbers(void)
{
int count;
for (count = 0; count < 10; count++)
{
int number;
for (number = 0; number <= 14; number++)
{
if (number >= 10)
{
_putchar('0' + number / 10);
}
_putchar('0' + number % 10);
}
_putchar('\n');
}
}
