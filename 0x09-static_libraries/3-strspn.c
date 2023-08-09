#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial input
 * @accept: characters forming prefix
 * Return: the number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
while (*s != '\0' && *s != '\n' && *s != '\t' && *s != ' ' && *s != '\r')
{
char *accept_ptr = accept;
while (*accept_ptr != '\0')
{
if (*accept_ptr == *s)
{
length++;
break;
}
accept_ptr++;
}
if (*accept_ptr == '\0')
{
break;
}
s++;
}
return (length);
}
