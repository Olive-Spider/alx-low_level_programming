#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function input
 * @a: input
 * @size: input
 * Return: 0
*/
void print_diagsums(int *a, int size)
{
int i;
int mainDiagonalSum = 0;
int secondaryDiagonalSum = 0;
for (i = 0; i < size; i++)
{
mainDiagonalSum += a[i * size + i];
secondaryDiagonalSum += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", mainDiagonalSum, secondaryDiagonalSum);
}
