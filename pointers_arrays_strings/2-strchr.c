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
int i, j;
char t[98];
char *p = t;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
for (j = 0; s[j] != '\0'; j++)
{
p[j] = s[i];
i++;
}
break;
}
}

if (t == NULL)
return (NULL);
else
return (p);
}
















