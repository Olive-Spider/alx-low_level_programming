#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - variadic function
 * @n: input
 * Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int value;
int sum;
va_list args;
if (n == 0)
{
return (0);
}
sum = 0;
va_start(args, n);
for (i = 0; i < n; i++)
{
value = va_arg(args, int);
sum += value;
}
va_end(args);
return (sum);
}
