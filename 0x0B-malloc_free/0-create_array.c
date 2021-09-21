#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
unsigned int i;
int *j;

if (size == 0)
{
return (NULL);     
}
j = malloc(sizeof(char) * size);
if (j == NULL);
{
return (NULL);
}
for (i = 0; i < size; i++)
{
j[i] = c;    
}
free (j);
return (j);
}
