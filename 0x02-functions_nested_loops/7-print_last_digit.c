#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: value to be returned
 * Return: n
*/
int print_last_digit(int n)
{
int a = n % 10;
if (n < 0)
{
n = -n;
}

if (a < 0)
{
a = -a;
}

_putchar(a + '0');
return (a);
}
