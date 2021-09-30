#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(char *separator, va_list args);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif