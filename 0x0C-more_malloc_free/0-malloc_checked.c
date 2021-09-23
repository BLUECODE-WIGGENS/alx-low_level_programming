#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: size to allocate
 *
 * Return: Void pointer
 */

void *malloc_checked(unsigned int b)
{
void *i;

i = malloc(b);
if (i == NULL)
exit(98);

return (i);
}
