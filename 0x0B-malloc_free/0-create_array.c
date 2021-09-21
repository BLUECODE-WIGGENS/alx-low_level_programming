#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
unsigned int i;
int *p;

if (size == 0)
{
return (NULL);     
}
p = malloc(size * sizeof(char));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
p[i] = c;    
}
free (p);
return (p);
}
