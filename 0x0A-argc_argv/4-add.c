#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * main - function
 * @argc: input
 * @argv: input
 * Return: 0
*/
int main(int argc, char *argv[])
{
int i, j, num, sum;
for (i = 1; i < argc; i++)
{
const char *arg = argv[i];
bool isNumber = true;
for (j = 0; arg[j] != '\0'; j++)
{
if (!isdigit(arg[j]))
{
isNumber = false;
break;
}
}
if (!isNumber)
{
printf("Error\n");
return (1);
}
num = atoi(arg);
if (num > 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
