#include <stdio.h>

/**
 * main - prints all possible
 * combinations of two two-digit numbers
 *
 * Return: 0
*/
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
putchar(i / 10 / 10 + '0');
putchar(i / 10 % 10 + '0');
putchar(' ');
putchar(j / 10 / 10 + '0');
putchar(j / 10 % 10 + '0');

if (i < 99 || j < 98)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
