#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of elements.
 * @nmemb: elements
 * @size: size of elements
 *
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
int *p;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(nmemb * size);
if (p == 0)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
p[i] = 0;
}
return (p);
}
