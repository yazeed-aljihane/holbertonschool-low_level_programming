#include "main.h"
#include <stdlib.h>




/**
 * alloc_grid - creates a 2D array of integers (a grid)
 * @width: number of columns for the grid
 * @height: number of rows for the grid
 *
 * Description:
 * This function dynamically allocates memory for a 2D array of integers
 * with the given width and height. Each row is allocated separately.
 * If either width or height is less than or equal to 0, or if memory
 * allocation fails, the function returns NULL.
 * Return: pointer to the 2D array (int **)
 * or NULL if allocation fails or dimensions are invalid
 */

int **alloc_grid(int width, int height)
{
int **arr;
int i;
if (width <= 0 || height <= 0)
return (NULL);

arr = malloc(height * sizeof(int *));
if (arr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(width * sizeof(int));
if (arr[i] == NULL)
{
for (; i > 0; i--)
{
free(arr[i]);
}
free(arr);
return (NULL);
}
}


return (arr);
}

