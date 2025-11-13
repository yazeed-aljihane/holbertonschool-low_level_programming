#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * print_strings - Prints strings separated by a given separator
 * @separator: The string to print between strings
 * @n: The number of strings passed to the function
 *
 * Description: Prints all given strings. If a string is NULL, prints (nil).
 *              Does not print the separator after the last string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
char *strin;
va_start(list, n);

for (i = 0; i < n; i++)
{
strin = va_arg(list, char*);


if (strin == NULL)
printf("(nil)");
else
printf("%s", strin);

if (separator != NULL)
{
if (i != n - 1)
printf("%s", separator);
}
}
printf("\n");
}
