#include "main.h"


/**
 * *_memcpy - function that copies memory area.
 * @dest: the destnion array
 * @src: the source array
 * @n: the number of index
 * Return: destnion after update
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);

}












