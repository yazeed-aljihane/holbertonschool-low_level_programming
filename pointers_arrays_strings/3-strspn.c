#include "main.h"






/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the string user want to check
 * @accept: the test standers
 * Return: n the number of bytes the passed the test
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int n = 0;




	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			n++;
			break;
			}
		}
		if (s[i] != accept[j])
		{
		break;
		}
	}


return (n);
}
