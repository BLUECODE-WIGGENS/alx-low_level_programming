#include "3-calc.h"

/**
 * op_add - adding two numbers
 * op_sub - subtracting two numbers
 * op_mul - multipliying two numbers
 * op_div - dividing two numbers
 * op_mod - returns the remainder after the division of two numbers.
 * @a: an integer .
 * @b: another integer.
 */

/**
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * Return: the difference between a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * Return: the result of the division of a and b.
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * Return: the remainder of the division of a and b.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b),
}
