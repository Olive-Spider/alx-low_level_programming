#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: input
 * Return: 0
*/
char *leet(char *str)
{
int i, j;
char leet_chars[] = { 'A', 'E', 'O', 'T', 'L' };
char leet_replacements[] = { '4', '3', '0', '7', '1' };

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == leet_chars[j] || str[i] == leet_chars[j] + 32)
{
str[i] = leet_replacements[j];
break;
}
}
}
return (str);
}
