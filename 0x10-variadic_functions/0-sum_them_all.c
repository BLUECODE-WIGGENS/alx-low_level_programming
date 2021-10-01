#include "variadic_functions.h"

/**
 *sum_them_all - returns the sum of all its parameters
 *@n: parameter number
 *
 *Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
va_list argptr;

if (n != 0)
{
va_start(argptr, n);

while (i < n)
{
sum += va_arg(argptr, int);
i++;
}

va_end(argptr);
return (sum);

}
return (0);
}
