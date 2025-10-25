#include "main.h"



/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to modify
 * Return: Pointer to the modified string
 */

char *cap_string(char *s)
{
int i;
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= 32;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] -= 32;
}
}

return (s);
}
