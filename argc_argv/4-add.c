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
int i;
int total = 0;
for (i = 1; i < argc; i++)
{
if (*argv[i] >= '0' && *argv[i] <= '9')
total += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}


printf("%d\n", total);
return (0);
}
