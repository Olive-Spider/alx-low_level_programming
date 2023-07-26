#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: 0
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}

while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
{
if (result > (INT_MAX - (s[i] - '0')) / 10)
{
return ((sign == 1) ? INT_MAX : INT_MIN);
}

result = result * 10 + (s[i] - '0');
i++;
}
return (result *sign);
}
