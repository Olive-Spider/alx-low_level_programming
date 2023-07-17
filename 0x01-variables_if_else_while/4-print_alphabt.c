#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * use putchar only twice
 * do not print q and e
 * Return: 0
*/
int main(void)
{
char lower_alphabet;

for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
{
if ((lower_alphabet != 'q') && (lower_alphabet != 'e'))
{
putchar(lower_alphabet);
}
}

putchar('\n');

return (0);
}
