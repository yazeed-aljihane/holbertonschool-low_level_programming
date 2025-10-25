#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, tmp;

for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
}












/**
 * print_array - prints an array of integers
 * @a: array of integers
 * @n: number of elements
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i != 0)
printf(", ");
printf("%d", a[i]);
}
printf("\n");
}









