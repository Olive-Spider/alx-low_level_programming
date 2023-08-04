#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_helper - return the natural square root
 * @n: input
 * @start: input
 * @end: end
 * Return: 0
*/
int _sqrt_recursion_helper(int n, int start, int end)
{
int mid, square;
{
if (start > end)
{
return (-1);
}
mid = start + (end - start) / 2;
square = mid *mid;
if (square == n)
{
return (mid);
}
else if (square > n)
{
return (_sqrt_recursion_helper(n, start, mid - 1));
}
else
{
return (_sqrt_recursion_helper(n, mid + 1, end));
}}
}
/**
 * _sqrt_recursion - return the natural square root
 * @n: input
 * Return: 0
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_recursion_helper(n, 0, n));
}
