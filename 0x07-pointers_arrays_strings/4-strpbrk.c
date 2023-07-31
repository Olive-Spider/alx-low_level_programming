#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: string input
 * @accept: set of chars to search for
 * Return: a pointer to the byte
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *accept_ptr = accept;
while (*accept_ptr != '\0')
{
if (*accept_ptr == *s)
{
return (s);
}
accept_ptr++;
}
s++;
}
return ('\0');
}
