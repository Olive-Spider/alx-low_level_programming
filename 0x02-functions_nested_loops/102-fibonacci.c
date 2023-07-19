#include <stdio.h>

/**
 * main - prints the first fibonacci numbers
 * Return: 0
*/
int main(void)
{
int i;
int n = 50;
unsigned long int fib[50];
fib[0] = 1;
fib[1] = 2;

for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 0; i < n; i++)
{
printf("%d", fib[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
return (0);
}
