#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main porgram
 * @argc: the argument count
 * @argv: array of arugment
 * Return: 0 if succsus error otherwise
 */
int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error\n");
return (1);
}



printf("%d\n", atoi(argv[1]) *  atoi(argv[2]));
return (0);
}
