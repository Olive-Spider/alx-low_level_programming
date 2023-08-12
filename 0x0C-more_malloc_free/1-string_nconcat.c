#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function
 * @s1: input
 * @s2: input
 * @n: input
 * Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len_s1, len_s2;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len_s1 = strlen(s1);
len_s2 = strlen(s2);
if (n >= len_s2)
{
n = len_s2;
}
result = (char *)malloc(len_s1 + n + 1);
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strncat(result, s2, n);
return (result);
}
