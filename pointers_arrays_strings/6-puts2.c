#include "main.h"

/**
 * puts2 - output string but jump one index
 * @str: input string
 *
 */

void puts2(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
}
for (j = 0; j < i; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
else
{
continue;
}
}
_putchar('\n');

}
