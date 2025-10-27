#include "main.h"
#include <stddef.h>

/**
 * *_strchr - function that locates a character in a string.
 * @s: pointer to string
 * @c: the target latter
 * Return: p;
 */
char *_strchr(char *s, char c)
{
int i;

if (c == '\0')
return (NULL);

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
	return (s + i);
}
   if (s[i] == '\0')
            return (NULL);
}

return (NULL);
}















