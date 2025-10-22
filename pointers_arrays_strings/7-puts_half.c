#include "main.h"

/**
 * puts_half - print secund half of string
 * @str: input string
 */

void puts_half(char *str)
{
int i, j;
int n;
for (i = 0; str[i] != '\0'; i++)
{
}



if (i % 2 == 0)
{
n = i / 2;

for (j = n; j < i; j++)
{
_putchar(str[j]);
}
}
else
{
n = (i + 1) / 2;

for (j = n; j < i; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}



