#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: input
 * Return: 0
*/
char *cap_string(char *str)
{
int ptr = 0;
while (str[ptr])
{
while (!(str[ptr] >= 'a' && str[ptr] <= 'z'))
ptr++;

if (str[ptr - 1] == ' ' ||
str[ptr - 1] == '\t' ||
str[ptr - 1] == '\n' ||
str[ptr - 1] == ',' ||
str[ptr - 1] == ';' ||
str[ptr - 1] == '.' ||
str[ptr - 1] == '!' ||
str[ptr - 1] == '?' ||
str[ptr - 1] == '"' ||
str[ptr - 1] == '(' ||
str[ptr - 1] == ')' ||
str[ptr - 1] == '{' ||
str[ptr - 1] == '}' ||
ptr == 0)
str[ptr] -= 32;
ptr++;
}
return (str);
}
