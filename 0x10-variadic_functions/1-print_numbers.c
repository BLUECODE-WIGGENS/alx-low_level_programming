#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers
 *@separator: string
 *@n: integers
 *
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;

if (n > 0)
{
va_start(args, n);

while (i < n)
{
printf("%d", va_arg(args, int));

if (i != n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
va_end(args);
}
printf("\n");
}
