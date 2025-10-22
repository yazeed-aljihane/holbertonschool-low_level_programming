#include "main.h"

/**
 * _strlen - print string length
 * @s: string
 * Return: the length of string
 *
 */
int _strlen(char *s)
{
int i;
for (i = 0; i >= 0; i++)
{
if (s[i] == '\0')
{
break;
}
}
return (i);
}
