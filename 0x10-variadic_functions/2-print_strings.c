#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char*);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
