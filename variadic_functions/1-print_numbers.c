#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>











/**
 * print_numbers - Prints numbers separated by a given separator
 * @separator: The string to print between numbers
 * @n: The number of integers passed to the function
 *
 * Description: Prints all given numbers, separated by the separator string.
 *              Does not print the separator after the last number.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list1;
va_start(list1, n);


for (i = 0; i < n; i++)
{
printf("%d", va_arg(list1, int));
if (i != n - 1)
printf("%s", separator);
}
printf("\n");
}
