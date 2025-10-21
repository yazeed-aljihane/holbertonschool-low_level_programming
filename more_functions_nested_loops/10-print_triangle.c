#include "main.h"





/**
 * print_triangle - print_triangle
 * @size: size of traingle
 */

void print_triangle(int size)
{
if (size > 0)
{
int i, j, k;
for (i = size; i > 0; --i)
{
for (j = i; j > 1; j--)
{
_putchar(' ');
}
for (k = i ; k <= size; k++)
{
_putchar('#');
}
_putchar('\n');
}

}
else
{
_putchar('\n');
}
}
