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
char *ptr = str;
int should_capitalize = 1;
while (*ptr != '\0')
{
if (should_capitalize && isalpha(*ptr))
{
*ptr = toupper(*ptr);
should_capitalize = 0;
}
else if (isspace(*ptr) || ispunct(*ptr))
{
should_capitalize = 1;
}
ptr++;
}
return (str);
}
