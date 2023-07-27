#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * rot13 - encodes a string using rot13
 * @str: input
 * Return: 0
*/
char *rot13(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
char c = str[i];
if (isalpha(c))
{
char base = islower(c) ? 'a' : 'A';
str[i] = (c - base + 13) % 26 + base;
}
}
return (str);
}
