#include "main.h"



/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to array
 * @b: the constant byte.
 * @n: the number bytes of the memory area pointed to by s
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{

s[i] = b;
}

return (s);

}



















