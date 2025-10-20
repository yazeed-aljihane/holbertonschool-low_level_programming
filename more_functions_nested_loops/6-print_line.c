#include "main.h"


/**
 * print_line - print custom line
 * @n: input number of under score
 *
 */

void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 0; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
