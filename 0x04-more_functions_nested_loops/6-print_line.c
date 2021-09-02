#include "main.h"

/**
 *print_line - check for the value of n
 *@n: integer
 *Return: no return
 */

void print_line(int n)
{
int i = '_';
int c;

for (c = 0; c < n; c++)
{
if (i <= 0)
_putchar('\n');
else
_putchar(i);
}
_putchar('\n');
}
