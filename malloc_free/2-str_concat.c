#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings with a space between them
 * @s1: first string (if NULL, treated as empty string)
 * @s2: second string (if NULL, treated as empty string)
 *
 * Description:
 * This function allocates memory and returns a pointer to a new string
 * that contains the contents of @s1 followed by a space, then the contents
 * of @s2, and finally a null terminator. If @s1 or @s2 is NULL, it is
 * treated as an empty string. The caller is responsible for freeing
 * the allocated memory using free().
 *
 * Return: pointer to the newly allocated concatenated string,
 * or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
int i, j, k;
char *arr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
arr = malloc(sizeof(char) * (i + j + 2));
if (arr ==  NULL)
return (NULL);

for (k = 0; k < i; k++)
arr[k] = s1[k];

arr[i] = ' ';

for (k = 0; k < j; k++)
{
arr[i + 1 + k] = s2[k];
}
arr[i + j + 1] = '\0';
return (arr);
}
