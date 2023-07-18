#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * starting 0
 * Return: 0
*/
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int k = i * j;
printf("%2d", k);
if (j < 9)
{
printf(", ");
}
}
if (i < 9)
{
printf("\n");
}
}
}
