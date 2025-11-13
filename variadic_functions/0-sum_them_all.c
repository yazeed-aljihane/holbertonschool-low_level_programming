#include "main.h"
#include <stdarg.h>





/**
 * sum_them_all - Sums all its parameters
 * @n: The number of arguments passed to the function
 * @...: A variable number of integer arguments to sum
 *
 * Description: Uses variadic functions to sum all integers provided.
 *              If n is 0, the function returns 0.
 *
 * Return: The total sum of all given integers, or 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int total = 0;
va_list list;
if (n == 0)
return (0);
va_start(list, n);

for (i = 0; i < n; i++)
{
total += va_arg(list, int);
}
va_end(list);

return (total);
}
