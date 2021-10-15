#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: number
 * @index: index
 *
 * Return: 1 if it worked, or -1
 *if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int s;

if (index >= 32)
return (-1);

s = 1 << index;
*n |= s;

return (1);
}
