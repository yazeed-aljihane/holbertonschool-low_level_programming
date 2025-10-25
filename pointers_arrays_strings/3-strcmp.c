#include "main.h"



/**
 * _strcmp - compere two str
 * @s1: str1
 * @s2: str2
 * Return: total
 */

int _strcmp(char *s1, char *s2)
{
int i;
int total = 0;
for (i = 0; s1[i] != '\0'; i++)
{


if (s1[i] != s2[i])
{
total = s1[i] - s2[i];
break;
}
else
{
continue;
}

}
return (total);
}











