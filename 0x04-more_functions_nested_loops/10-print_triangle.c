#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: integer to be checked
 * Return: 0
*/
void print_triangle(int size)
{
int row, hashes, spaces;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces > 0; spaces--)
{
_putchar(' ');
}
for (hashes = 0; hashes < row; hashes++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
