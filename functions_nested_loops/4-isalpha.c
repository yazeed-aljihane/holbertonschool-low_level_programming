#include "main.h"



/**
 * _isalpha - chech if c a latter
 * @c: is input from the user
 * Return: 1 if Sucses ,0 otherwaise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}


