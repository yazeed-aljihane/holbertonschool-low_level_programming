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
for (i = 0; i < strlen(str); i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
