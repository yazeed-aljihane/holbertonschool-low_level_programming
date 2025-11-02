#include "main.h"



/**
* _strlen_recursion - function that returns the length of a string.
* @s: the string
* Return: number
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}


/**
 * is_palindrome - function that checks if a string is a palindrome.
 * @s: the string to be checked
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);

return (testtt(s, length - 1, 0));

}

/**
 * testtt - helper function that recursively checks characters in a string
 *           to determine if it is a palindrome.
 * @s: the string being checked
 * @length: the current index from the end of the string
 * @g: the current index from the start of the string
 * Return: 1 if palindrome, 0 if not
 */
int testtt(char *s, int length, int g)
{
if (g == (length / 2) + 1)
return (1);
else if (s[g] == s[length])
return (testtt(s, length - 1, g + 1));
else if (s[g] != s[length])
return (0);

return (2);
}



