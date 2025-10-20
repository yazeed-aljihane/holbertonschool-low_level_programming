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
int i;
for (i = 0; i <= n; i++)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
