#include "main.h"
#include <stdio.h>

/**
 * print_number -  prints an integer
 * @n: input
 * Return: 0
*/
void print_number(int n)
{
int divisor = 1;
int temp = n;
if (n < 0)
{
_putchar('-');
n = -n;
}
while (temp >= 10)
{
divisor *= 10;
temp /= 10;
}
while (divisor > 0)
{
int digit = n / divisor;
_putchar('0' + digit);
n %= divisor;
divisor /= 10;
}
}
