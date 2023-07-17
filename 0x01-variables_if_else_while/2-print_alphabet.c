#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * use putchar only
 * use putchar only twice
 * Return: 0
*/

int main(void)
{
char lower_alphabet;

for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
{
putchar(lower_alphabet);
}

putchar('\n');

return (0);
}
