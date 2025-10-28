#include "main.h"
#include <stddef.h>


/**
 * *_strstr - function that locates a substring.
 * @haystack: the big string
 * @needle: the small string
 * Return: the first letter
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{


for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[0])
{
return (haystack + i);
}
}





}
return (NULL);
}











