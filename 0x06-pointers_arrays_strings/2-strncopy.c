#include "main.h"

/**
 * _strncopy - copy strings
 * @dest: destination
 * @src: source
 * @n: integer
 * 
 * return: destination
 */

char *_strncopy(char *dest, char *src, int n)
{
int j = 0;

for (j = 0; src[j] != '\0'; j++)
{
if (j < n)
{
dest[j] = src[j];    
}    
}
for (; j < n; j++)
{
dest[j] = '\0';    
}
return (dest);
}
