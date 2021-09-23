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
unsigned int i = 0;
int *p;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(nmemb * size);
if(p == 0)
{
return (0);
}
while (i < nmemb * size)
{
p[i] = 0;
i++;
}
return (p);
}
