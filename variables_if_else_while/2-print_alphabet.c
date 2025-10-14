#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

/* more headers goes there */

/* betty style doc for function main goes there */


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char str[] = "abcdefghijklmnopqrstuvwxyz";
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
return (0);
}
