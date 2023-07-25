#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string being reversed
 * Return: 0
*/
void rev_string(char *s)
{
int i;
int length = 0;
while (s[length] != '\0')
{
length++;
}

for (i = 0; i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
