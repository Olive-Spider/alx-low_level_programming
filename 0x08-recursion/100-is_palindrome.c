#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_helper - palindrome
 * @s: input
 * @start: input
 * @end: input
 * Return: 0
*/
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - palindrome
 * @s: input
 * Return: 0
*/
int is_palindrome(char *s)
{
int length = strlen(s);
if (length <= 1)
{
return (1);
}
return (is_palindrome_helper(s, 0, length - 1));
}
