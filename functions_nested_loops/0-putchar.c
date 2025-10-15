#include <stdio.h>
#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char str[] = "_putchar";
for (i = 0; i <= 7; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
