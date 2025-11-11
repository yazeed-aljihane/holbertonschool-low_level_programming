#include <stdio.h>
#include "function_pointers.h"


/**
* array_iterator - executes a function given as a parameter
* on each element of array
* @array: array
* @size: size of array
* @action: function you wanted
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
void (*a)(int) = action;
int *arrayy = array;
size_t i;
for (i = 0; i < size; i++)
{
a(arrayy[i]);
}
}
