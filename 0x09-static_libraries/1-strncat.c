#include "main.h"
#include "stdio.h"

/**
 * _strncat - concatenates two strings
 * @dest: string input
 * @src: string input
 * @n: bytes
 * Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_end = dest;
while (*dest_end != '\0')
{
dest_end++;
}
while (*src != '\0' && n > 0)
{
*dest_end = *src;
dest_end++;
src++;
n--;
}
*dest_end = '\0';
return (dest);
}
