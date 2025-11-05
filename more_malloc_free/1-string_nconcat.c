#include "main.h"
#include <stdlib.h>



/**
 * string_nconcat - concatenates two strings, using at most n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes from s2 to concatenate
 *
 * Description: Allocates memory and returns a pointer to a new string that
 * contains s1 followed by the first n bytes of s2. If s1 or s2 is NULL,
 * they are treated as empty strings. If malloc fails, function returns NULL.
 *
 * Return:pointer to the newly allocated concatenated string,or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *arr;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s2[i] != '\0'; i++)
;
if (n >= i)
{
n = i;
}

for (i = 0; s1[i] != '\0'; i++)
;


arr = malloc(i + n + 1);
if (arr == NULL)
return  (NULL);

for (j = 0; j < i; j++)
{
arr[j] = s1[j];
}

for (j = 0; j < n; j++)
{
arr[i] = s2[j];
i++;
}
arr[i] = '\0';
return (arr);
}
