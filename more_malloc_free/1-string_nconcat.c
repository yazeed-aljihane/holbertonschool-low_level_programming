#include "main.h"
#include <stdlib.h>



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
