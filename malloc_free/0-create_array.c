#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char.
 * @size: the size of the array
 * @c: the character used to initialize the array
 * Return: pointer to the array, or NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr = malloc(size);
if (arr == NULL)
return (NULL);

if (size == 0)
return (NULL);



for (i = 0; i < size; i++)
{
arr[i] = c;

}

return (arr);
}
