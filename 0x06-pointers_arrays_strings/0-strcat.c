#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: 0
*/
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;
while (*dest_end != '\0')
{
dest_end++;
}
while (*src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
}
*dest_end = '\0';

return (dest);
}
