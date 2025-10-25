#include "main.h"



/**
 * *leet - leet
 * @s: str
 * Return: str
 */
char *leet(char *s)
{

int i, j;
char from[] = "aAeEoOtTlL";
char to[] =   "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; from[j] != '\0'; j++)
{
if (s[i] == from[j])
{
s[i] = to[j];
break;
}
}
}



return (s);
}

