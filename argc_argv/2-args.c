#include <stdio.h>


/**
 * main - the main porgram
 * @argc: the argument count
 * @argv: array of arugment
 * Return: 0 if succsus error otherwise
 */
int main(int argc, char **argv)
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}


return (0);
}
