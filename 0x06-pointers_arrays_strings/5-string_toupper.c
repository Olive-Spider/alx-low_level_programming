#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: input
 * Return: 0
*/
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
*ptr = toupper(*ptr);
ptr++;
}
return (str);
}
