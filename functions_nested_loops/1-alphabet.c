#include "main.h"


/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
char str;

for (str = 'a'; str <= 'z'; str++)
{
_putchar(str);
}
_putchar('\n');
}
