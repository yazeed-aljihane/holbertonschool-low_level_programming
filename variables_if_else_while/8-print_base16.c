#include <stdio.h>

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
char a;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
