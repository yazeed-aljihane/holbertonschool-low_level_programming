#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: input number from user
 * Return: n after proccing
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = n * -1;
}
n = n % 10;
return (n);
}
