#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: unsigned in
 * @b:char
 * @s:memory to be filled
 * Return: 0
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
