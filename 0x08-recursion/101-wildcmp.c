#include "main.h"
#include <stdio.h>

/**
 * wildcmp_helper - inception
 * @s1: input
 * @s2: input
 * Return: 0
*/
int wildcmp_helper(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s1 == *s2 || (*s2 == '*' && *s1 != '\0'))
{
return (wildcmp_helper(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
return (wildcmp_helper(s1, s2 + 1) || wildcmp_helper(s1 + 1, s2));
}
return (0);
}

/**
 * wildcmp - inception
 * @s1: input
 * @s2: input
 * Return: 0
*/
int wildcmp(char *s1, char *s2)
{
return (wildcmp_helper(s1, s2));
}
