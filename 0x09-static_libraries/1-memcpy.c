#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes to be copied
 * @dest: location to store memory
 * @src: memory source
 * Return: 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
