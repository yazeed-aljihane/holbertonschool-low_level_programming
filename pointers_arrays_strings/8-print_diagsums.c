#include "main.h"
#include <stdio.h>



/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: array of integers
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
int i;
int r, l = 0;
int k = size - 1;
for (i = 0; i < size ; i++)
{
r += a[i * size + i];
l += a[i * size + k];
k--;
}
printf("%d, %d\n", r, l);
}


















