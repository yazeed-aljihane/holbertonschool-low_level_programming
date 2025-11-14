#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct type - Mapping between a format specifier and its handler function
 * @types: The format specifier character (e.g. 'c', 's', 'd')
 * @print: Function pointer that handles printing for this specifier
 *
 * Used by the custom printf implementation to match a specifier
 * with the correct printing function.
 */
typedef struct type
{
char types;
void (*print)(va_list *);
} types;







#endif
