#include "main.h"

int _atoi(char *s)
{
int i;
int sign = 1;
int j = 0;
char k;
int total;
//loop on all string
for (i = 0; s[i] != '\0'; i++)
{

//stop to first numbet found
if (s[i] >= '0' && s[i] <= '9')
{
//break the on first non number found
if (s[i] < '0' || s[i] > '9')
{
break;
}
// turn the number from string to integer
for (k; k != s[i]; k++)
{
j++
}
// math
if (s[i + 1] >= '0' && s[i + 1] <= '9')
{
total = total * 10 + s[i]
}






// find the sighn of number
if (s[i - 1] == '-')
{
sign = -1;
}
else
{
continue;;
}

}
}
total = total * sign;
return total;
}
