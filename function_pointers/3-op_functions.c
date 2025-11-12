#include "calc.h"
#include <stdio.h>
#include <stdlib.h>





/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtracts the second integer from the first
 * @a: first integer
 * @b: second integer
 *
 * Return: difference (a - b)
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divides the first integer by the second
 * @a: numerator
 * @b: denominator
 *
 * Return: result of a / b
 * Note: division by zero must be handled by the caller
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - calculates the remainder of dividing the first integer  the second
 * @a: numerator
 * @b: denominator
 *
 * Return: remainder of a divided by b
 * Note: modulo by zero must be handled by the caller
 */
int op_mod(int a, int b)
{
return (a % b);
}



