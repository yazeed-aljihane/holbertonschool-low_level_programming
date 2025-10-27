#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: the character to locate
 *
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; ; i++)  /* loop will stop when s[i] == '\0' and checked inside */
    {
        if (s[i] == c)
            return (s + i);

        if (s[i] == '\0')
            return (NULL);
    }
}













