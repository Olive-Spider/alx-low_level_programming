#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (0);
}
