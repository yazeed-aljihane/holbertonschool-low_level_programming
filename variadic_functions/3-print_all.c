#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printNumber - Prints an integer from a va_list
 * @list: Pointer to the va_list containing the integer
 *
 * Description: Extracts an int from the argument list and prints it.
 */

void printNumber(va_list *list)
{
printf("%d", va_arg(*list, int));
}
/**
 * printLetter - Prints a character from a va_list
 * @list: Pointer to the va_list containing the character
 *
 * Description: Extracts an int (ASCII code) and prints it as a character.
 */

void printLetter(va_list *list)
{
printf("%c", va_arg(*list, int));
}
/**
 * printString - Prints a string from a va_list
 * @list: Pointer to the va_list containing the string
 *
 * Description: Prints "(nil)" if the string is NULL, otherwise prints it.
 */

void printString(va_list *list)
{
char *x = va_arg(*list, char*);
printf("%s", va_arg(*list, x));
}
/**
 * printLongNumber - Prints a floating-point number from a va_list
 * @list: Pointer to the va_list containing the double
 *
 * Description: Extracts a double and prints it using %f.
 */

void printLongNumber(va_list *list)
{
printf("%f", va_arg(*list, double));
}
/**
 * print_all - Prints values based on a format string
 * @format: A constant format string of type specifiers
 *
 * Description: Iterates through the format string, matches each
 * specifier with a handler in the types array, and prints
 * the corresponding argument. Outputs separators properly
 * and ends with a newline.
 */

void print_all(const char * const format, ...)
{
int i, j;
int first = 1;
va_list list;

types tp[] = {
{'i', printNumber},
{'f', printLongNumber},
{'c', printLetter},
{'s', printString}};
va_start(list, format);

i = 0;
while (format[i] != '\0')
{
j = 0;
while (j < 4)
{
if (format[i] == tp[j].types)
{
if (first == 0)
printf(", ");
tp[j].print(&list);
first = 0;
}
j++;
}
i++;
}

va_end(list);
printf("\n");
}
