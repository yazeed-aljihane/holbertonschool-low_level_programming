#include "main.h"
#include <stdlib.h>



/**
 * _strdup - function that returns a pointer to a newly allocated memory space
 *containing a copy of the given string.
 * @str: the string to be duplicated
 * Return: pointer to the duplicated string,or NULL if str is NULL
 */


char *_strdup(char *str)
{
int i, j;
char *arr;
if (str == NULL)
return (NULL);


for (i = 0; str[i] != '\0'; i++)
{
}

arr = malloc(i + 1);
if (arr == NULL)
return (NULL);

for (j = 0; j < i; j++)
{
arr[j] = str[j];
}
arr[i] = '\0';
return (arr);
}
