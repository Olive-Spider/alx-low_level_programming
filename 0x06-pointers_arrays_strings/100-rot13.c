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
int i, j;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == data1[j])
{
str[i] = datarot[j];
break;
}
}
}
return (str);
}
