#include "main.h"

/**
 * *_strcpy - move text from src to dest
 * @dest: the pointer to empty array
 * @src: the pointer to text
 * Return: dest after fill it with text
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}




