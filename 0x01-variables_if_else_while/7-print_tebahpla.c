#include <stdio.h>

/**
 * main - print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char ba;

	for (ba = 'z'; ba >= 'a'; ba--)
		putchar(ba);

	putchar('\n');

	return (0);
}
