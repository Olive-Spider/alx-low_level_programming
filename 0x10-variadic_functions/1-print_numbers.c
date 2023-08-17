#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - variadic function
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int value;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
value = va_arg(args, int);
printf("%d", value);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
