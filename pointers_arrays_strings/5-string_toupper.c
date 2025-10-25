#include "main.h"





/**
 * *string_toupper - turn all latter of string to upper case
 * @s: str
 * Return: s
 *
 */

char *string_toupper(char *s)
{

int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] > 'a' && s[i] < 'z')
{
s[i] = s[i] - ('a' - 'A');
}
}

return (s);
}
