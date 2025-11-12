#include "3-calc.h"
#include <stdlib.h>
#include <string.h>



/**
 * get_op_func - selects the correct arithmetic operation function
 * @s: operator as a string ("+", "-", "*", "/", "%")
 *
 * Description: Searches an array of op_t structures for a matching operator.
 * If found, returns a pointer to the corresponding function
 * that takes two integers and returns an integer result.
 *
 * Return: Pointer to the function corresponding to the operator,
 *         or NULL if the operator is not recognized.
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0; 
while(i < 5)
{ 

if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);

i++;
}
return (NULL);
}
