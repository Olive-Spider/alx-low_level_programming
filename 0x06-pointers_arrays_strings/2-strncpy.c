#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: int
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
char *dest_ptr = dest;
while (*src != '\0' && n > 0)
{
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}
while (n > 0)
{
*dest_ptr = '\0';
dest_ptr++;
n--;
}
return (dest);
}
