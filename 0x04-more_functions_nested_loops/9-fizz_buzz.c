#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 0 to 100
 * for multiples of 3, Fizz
 * for multiples of 5, Buzz
 * for multiples of both three and five print FizzBuzz
 * Return: 0
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}