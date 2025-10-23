#include "main.h"
/**
 * _atoi - turn string ti integr
 * @s: string pointer
 * Return: the number in string
 */
int _atoi(char *s)
{
int i;
int sign = 0;
int total = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '+')
{
sign += 1;
}
else if (s[i] == '-')
{
sign -= 1;
}
if (s[i] >= '0' && s[i] <= '9')
{
total = total * 10 + (s[i] - '0');
if (s[i + 1] < '0' || s[i + 1] > '9')
{
break;
}
}
else
{
continue;
}
}
if (sign < 0)
{
sign = -1;
}
else
{
sign = 1;
}
total = total *sign;
return (total);
}
