#include "main.h"





/**
 * sqrtt - sqrtttt
 * @n: number
 * @g: gusse
 * Return: result
 */

int sqrtt(int n, int g)
{
if (g * g == n)
return (g);
else if (g * g > n)
return (-1);
return (sqrtt(n, g + 1));

}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n < 0)
return (-1);
else
return (sqrtt(n, 1));


}













