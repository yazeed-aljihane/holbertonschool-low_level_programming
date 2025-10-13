#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long b;
long long c;
float d;
char e;

printf("Size of a char:%zu bytes\n", sizeof(e));
printf("Size of an int:%zu bytes\n", sizeof(a));
printf("Size of a long int: %zu bytes\n", sizeof(b));
printf("Size of a long long int: %zu bytes\n", sizeof(c));
printf("Size of a float: %zu bytes\n", sizeof(d));
return (0);
}
