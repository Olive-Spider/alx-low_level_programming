#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
char *duplicate;
size_t length;
if (str == NULL)
{
return (NULL);
}
length = strlen(str);
duplicate = (char *)malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
