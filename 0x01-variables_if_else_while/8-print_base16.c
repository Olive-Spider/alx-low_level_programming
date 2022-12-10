#include <stdio.h>

/**
 * main - prints numbers with base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int a;
	char x;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');

	return (0);
}


