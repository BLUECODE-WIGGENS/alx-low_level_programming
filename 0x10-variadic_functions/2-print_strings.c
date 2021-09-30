#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - entry point
 *@separator: comma and space
 *@n: number of argument
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *s;

va_list argc;

if (n > 0)
{
va_start(argc, n);


while (i < n)
{
s = va_arg(argc, char *);

if (s == NULL)
printf("(nil)");
else
printf("%s", s);

if (i != n - 1 && separator != NULL)
printf("%s", separator);

i++;
}

va_end(argc);
}
printf("\n");
}
