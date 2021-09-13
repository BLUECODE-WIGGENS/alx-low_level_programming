#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * return : A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
unsigned char *p = s;
i = 0;
while(n > 0)
{
*p = b;
p++;
n--;    
}
return(s);    
}
