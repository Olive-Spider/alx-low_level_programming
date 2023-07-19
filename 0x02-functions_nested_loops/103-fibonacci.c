#include <stdio.h>

/**
 * main - fibonacci sequence
 * Return: 0
*/
int main(void)
{
int limit = 4000000;
int fib[2] = {1, 2};
int sum = 0;
int next_fib;

while (fib[1] <= limit)
{
if (fib[1] % 2 == 0)
{
sum += fib[1];
}
next_fib = fib[0] + fib[1];
fib[0] = fib[1];
fib[1] = next_fib;
}

printf("%d\n", sum);

return (0);
}
