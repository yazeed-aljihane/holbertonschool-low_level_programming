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
int k;
if (*needle == '\0')
return (haystack);



for (i = 0; haystack[i] != '\0'; i++)
{
k = 0;
	if (haystack[i] == needle[0])
	{
		for (j = i; needle[k] != '\0' && haystack[j] != '\0'; j++)
		{
		if (haystack[j] != needle[k])
		{
		break;
		}
		k++;
		}
if (needle[k] == '\0')
{
return (haystack + i);
}
	}

}



return (NULL);
}











