#include "main.h"

/**
 * print_diagonal - print \ for n time
 * @n: the input number
 *
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i, j;
for (j = 0; j < n; j++)
{
if (j > 0)
{
for (i = 0; i < j; i++)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
