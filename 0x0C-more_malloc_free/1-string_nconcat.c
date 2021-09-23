#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -concatenates two strings
 * @s1: destnation
 * @s2: source of string
 * 
 * Return: Pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b, c = 0;
char *s;

if (s1 == 0)
{
s1 = "";
}
if (s2 == 0)
{
s2 = "";
}
for (a = 0; a < s1[a]; a++)
;
for (b = 0; b < s2[b]; b++)
;
if (b > n)
{
b = n;
}
s = malloc((sizeof(char) * a) + (sizeof(char) * b) + 1);

if (s == NULL)
{
return (NULL);
}

for (; *s1 = '\0'; s1++)
{
s1[c] = *s1;
c++;
}
for(; *s2 = '\0'; s2++)
{
s2[c] = *s2;
c++;
}
s[c] = '\0';
return (s);
}
