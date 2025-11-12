#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - performs simple arithmetic operations based on command line input
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Description: The program expects exactly 3 arguments: integer, an operator,
 * and another integer. It validates the operator and checks for
 * division by zero. The corresponding arithmetic function is
 * retrieved using get_op_func, executed, and the result is printed.
 *
 * Return: 0 on success, exits with error codes 98, 99, or 100  invalid input
 *         or division by zero.
 */

int main(int argc, char **argv)
{
int (*fun)(int, int);
int total = 0;
if (argc == 4)
{
if ((*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '/'
|| *argv[2] == '*' || *argv[2] == '%')
&& strlen(argv[2]) == 1)
{
if (*argv[2] == '/' && (atoi(argv[1]) == 0 || atoi(argv[3]) == 0))
{
printf("Error\n");
exit(100);
}

fun = get_op_func(argv[2]);
total = fun(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", total);
}
else
{
printf("Error\n");
exit(99);
}
}
else
{
printf("Error\n");
exit(98);
}


return (0);
}
