#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array,
 *         or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
int i;
int *arr;
int size = max - min + 1;

if (min > max)
return (NULL);

arr = malloc(size * sizeof(int));
if (arr ==  NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = min;
min++;
}

return (arr);


}
