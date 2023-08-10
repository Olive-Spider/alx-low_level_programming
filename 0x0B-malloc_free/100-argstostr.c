#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int i;
size_t total_length, current_pos;
char *result;
if (ac == 0 || av == NULL)
{
return (NULL);
}
total_length = 0;
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}
result = (char *)malloc((total_length + 1) * sizeof(char));
if (result == NULL)
{
return (NULL);
}
current_pos = 0;
for (i = 0; i < ac; i++)
{
strcpy(result + current_pos, av[i]);
current_pos += strlen(av[i]);
result[current_pos++] = '\n';
}
result[current_pos] = '\0';
return (result);
}
