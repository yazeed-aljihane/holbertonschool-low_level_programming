#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory safely
 * @b: the number of bytes to allocate
 *
 * Description:
 * This function calls malloc to allocate a memory block
 * of size b bytes. If malloc fails (returns NULL),
 * the function immediately terminates the program
 * with exit status 98.
 *
 * Return: pointer to the allocated memory on success.
 */

void *malloc_checked(unsigned int b)
{
int *arr = malloc(b);

if (arr == NULL)
exit(98);

return (arr);
}
