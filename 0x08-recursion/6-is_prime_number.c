#include "main.h"
#include <stdio.h>

/**
 * is_prime_number_helper - prime number
 * @n: input
 * @divisor: input
 * Return: 0
*/
int is_prime_number_helper(int n, int divisor)
{
if (divisor == 1)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_prime_number_helper(n, divisor - 1));
}
/**
 * is_prime_number - prime number
 * @n: input
 * Return: 0
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_number_helper(n, n - 1));
}
