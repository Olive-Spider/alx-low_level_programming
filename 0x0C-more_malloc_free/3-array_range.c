#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function
 * @max: input
 * @min: input
 * Return: 0
*/
int *array_range(int min, int max)
{
int i, *arr;
if (min > max)
{
return (NULL);
}

arr = (int *)malloc((max - min + 1) * sizeof(int));

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i <= max - min; i++)
{
arr[i] = min + i;
}
return (arr);
}
