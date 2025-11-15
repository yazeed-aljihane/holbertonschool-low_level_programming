#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printNumber - Prints an integer from a va_list
 * @list: Pointer to the va_list containing the integer
 */
void printNumber(va_list *list)
{
printf("%d", va_arg(*list, int));
}

/**
 * printLetter - Prints a character from a va_list
 * @list: Pointer to the va_list containing the character
 */
void printLetter(va_list *list)
{
	printf("%c", va_arg(*list, int));
}

/**
 * printString - Prints a string from a va_list
 * @list: Pointer to the va_list containing the string
 */
void printString(va_list *list)
{
	char *x = va_arg(*list, char*);

	if (!x)
		x = "(nil)";
	printf("%s", x);
}

/**
 * printLongNumber - Prints a floating-point number from a va_list
 * @list: Pointer to the va_list containing the double
 */
void printLongNumber(va_list *list)
{
	printf("%f", va_arg(*list, double));
}

/**
 * print_all - Prints values based on a format string
 * @format: A constant format string of type specifiers
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator;
	va_list list;

	types tp[] = {
		{'i', printNumber},
		{'f', printLongNumber},
		{'c', printLetter},
		{'s', printString}
	};

	separator = "";
	va_start(list, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == tp[j].types)
			{
				printf("%s", separator);
				tp[j].print(&list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(list);
	printf("\n");
}
