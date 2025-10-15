#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = print_last_digit(98);
_putchar(r + '0');
_putchar(r + '0');
r = print_last_digit(0);
_putchar(r + '0');
r = print_last_digit(-1024);
_putchar(r + '0');
r = print_last_digit(INT_MAX);
_putchar(r + '0');
r = print_last_digit(INT_MIN);
_putchar(r + '0');
r = print_last_digit(1);
_putchar(r + '0');
_putchar('\n');
return (0);
}
