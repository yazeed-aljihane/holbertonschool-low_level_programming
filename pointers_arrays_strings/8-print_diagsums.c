#include "main.h"
#include <stdio.h>




void print_diagsums(int *a, int size)
{
int i, j;
int r, l = 0;
int k = size - 1;

for (i = 0; i < size ; i++)
{
for (j = 0; j < size / 2; j++)
{
printf("%d, %d \n", r , l);
r += a[i * size + i];
l += a[i * size + k];
k--;
}

}
printf("%d, %d \n", r , l);
}


















