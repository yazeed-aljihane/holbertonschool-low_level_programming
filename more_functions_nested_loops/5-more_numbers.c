#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ,10 times
 */
void more_numbers(void)
{
int i;
int j;
int k;
for (k = 0; k <= 10; k++)
{
for (i = 0; i < 2; i++)
{

for (j = 0; j <= 9; j++)
{
if (i == 1 && j > 4)
{
break;
}
if (i == 1)
{
_putchar(i + '0');
}
_putchar(j + '0');
}
}
_putchar('\n');
}
}
