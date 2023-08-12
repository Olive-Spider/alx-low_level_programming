#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit_string - function
 * @str: input
 * Return: 0
*/
int is_digit_string(const char *str)
{
size_t i;
for (i = 0; i < strlen(str); i++)
{
if (!isdigit(str[i]))
{
return (0);
}
}
return (1);
}

/**
 * multiply - function
 * @num1: input
 * @num2: input
 * Return: 0
*/
void multiply(const char *num1, const char *num2)
{
unsigned long int result;
result = strtoull(num1, NULL, 10) * strtoull(num2, NULL, 10);
printf("%lu\n", result);
}
