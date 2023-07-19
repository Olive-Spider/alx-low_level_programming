#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: number to be printed
 * Return: 0
*/
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
{
return;
}

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (i * j == 0)
{
printf("%d", i * j);
}
else
{
printf("%4d", i * j);
}
}
printf("\n");
}
}
