#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * @s: string to be chencked
*/
void _puts(char *s)
{
while (*s != '\0')
{
putchar(*s);
s++;
}
putchar('\n');
}
