#include "main.h"




/**
 * *_strcat - append str2 to str1
 * @dest: str1
 * @src:  str2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
int k = 0;
if (src[0] != '\0')
{
for (i = 0; dest[i] != '\0'; i++)
{
}


dest[i] = ' ';
for (j = i; src[k] != '\0'; j++)
{
dest[j] = src[k];
k++;
}
}
return (dest);
}
