#include "main.h"



/**
 * swap_int - swap values between two varubles
 * @a: pointer 1
 * @b: pointer 2
 */

void swap_int(int *a, int *b)
{
int storge = *a;
*a = *b;
*b = storge;
}
