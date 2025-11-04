#include "main.h"
#include <stdlib.h>





/**
 * free_grid - Frees a 2D grid previously allocated by alloc_grid
 * @grid: Pointer to the 2D array to be freed
 * @height: Number of rows in the grid
 *
 * Description:
 * This function releases all memory allocated for a two-dimensional
 * grid of integers. It first frees each row of the grid, then frees
 * the array of pointers itself to avoid memory leaks.
 *
 * Return: Nothing (void)
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
