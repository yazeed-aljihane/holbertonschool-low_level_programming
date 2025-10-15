#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: input number from user
 * Return: n after proccing
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = -n;
}
return (n);
}
