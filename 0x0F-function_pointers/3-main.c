#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function
 * @argc: input
 * @argv: input
 * Return: 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1, num2;
int result;
int i;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

i = 0;
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *argv[2] && argv[2][1] == '\0')
{
result = ops[i].f(num1, num2);
printf("%d\n", result);
return (0);
}
i++;
}
printf("Error\n");
return (99);
}
