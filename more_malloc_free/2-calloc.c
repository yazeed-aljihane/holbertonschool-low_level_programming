#include "main.h"
#include <stdlib.h>




/**
 * _calloc - allocates memory for an array using malloc and sets it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Description: This function allocates memory for an array of nmemb elements
 * of size bytes each, and initializes all bytes in the allocated memory to 0.
 * If nmemb or size is 0, or if malloc fails, the function returns NULL.
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;

if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(nmemb * size);
if (arr == NULL)
return (NULL);




return (arr);

}


