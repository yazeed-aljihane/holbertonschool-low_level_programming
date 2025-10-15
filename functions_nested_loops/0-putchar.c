#include <stdio.h>
#include "main.h"
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
size_t i;
char str[] = "_putchar";
for (i = 0; i < strlen(str); i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
