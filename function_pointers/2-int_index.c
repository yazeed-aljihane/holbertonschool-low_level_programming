#include <stdlib.h>










/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: pointer to the array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: index of the first element for which cmp returns a positive value,
 *         or -1 if no match is found or if size <= 0 or array/cmp is NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int (*fun)(int) = cmp;
int i;
if (size <= 0)
return (-1);
if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (fun(array[i]) > 0)
return (i);
}
return (-1);
}
