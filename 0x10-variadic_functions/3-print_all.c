#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  prints anything
 * @format: types of arguments passed to the function
 * Return: 0
*/
void print_all(const char * const format, ...)
{
char *str;
char *separator;
unsigned int current_format;
va_list args;
va_start(args, format);
separator = "";
current_format = 0;
while (format && format[current_format] != '\0')
{
if (format[current_format] == 'c')
{
printf("%s%c", separator, va_arg(args, int));
}
else if (format[current_format] == 'i')
{
printf("%s%d", separator, va_arg(args, int));
}
else if (format[current_format] == 'f')
{
printf("%s%f", separator, va_arg(args, double));
}
else if (format[current_format] == 's')
{
str = va_arg(args, char*);
if (str == NULL)
{
printf("%s(nil)", separator);
}
else
{
printf("%s%s", separator, str);
}
}
separator = ", ";
current_format++;
}
va_end(args);
printf("\n");
}
