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

/**
 * testNumber - test number if its prime
 * @sqrt: squere of number
 * @g: the test parameter
 * @n: the orignal number
 * Return: the result 1 if prime , 0 otherwise
 */

int testNumber(int sqrt, int g, int n)
{
if (g > sqrt)
return (1);
else if (n % g == 0)
return (0);

return (testNumber(sqrt, g + 1, n));
}


/**
 * is_prime_number - find the prime number
 * @n: number
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (testNumber(_sqrt_recursion(n), 2, n));


}



























