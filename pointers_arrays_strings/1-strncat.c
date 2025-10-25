#include "main.h"



/**
 * *_strncat - append 2 str with each other
 * @dest: str1
 * @src: str2
 * @n: number of letter fron str2
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
int k = 0;
if (src[0] != '\0' &&  n != 0)
{
for (i = 0; dest[i] != '\0'; i++)
{
}


dest[i] = ' ';
for (j = i; k < n; j++)
{
dest[j] = src[k];
k++;
if (src[k] == '\0')
{
break;
}
}
}
return (dest);
}
