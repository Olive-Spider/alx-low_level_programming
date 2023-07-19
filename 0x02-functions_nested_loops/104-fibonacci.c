#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: 0
*/
int main(void)
{
int n = 98;
int a = 1, b = 2;
int i;
int next;

printf("%d, %d", a, b);

for (i = 2; i < n; i++)
{
next = a + b;
printf(", %d", next);
a = b;
b = next;
}
printf("\n");
return (0);
}
