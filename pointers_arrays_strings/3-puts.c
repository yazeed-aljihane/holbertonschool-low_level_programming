#include "main.h"

/**
 * _puts - print any string
 * @str: the text would be print
 */

void _puts(char *str)
{
int i;
for (i = 0; i >= 0; i++)
{
_putchar(str[i]);
if (str[i] == '\0')
{
_putchar('\n');
break;
}
}
}
