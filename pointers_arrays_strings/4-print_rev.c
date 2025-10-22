#include "main.h"


/**
 * print_rev - print reverse of string
 * @s: the string input
 */

void print_rev(char *s)
{
int i, j;
for (i = 0; i >= 0; i++)
{
if (s[i] == '\0')
{
break;
}
}

for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
