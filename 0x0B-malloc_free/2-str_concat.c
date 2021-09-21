#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two string of any size.
 * @s1: string 
 * @s2: another string
 * 
 * return: string concatenated
 */

char *str_concat(char *s1, char *s2)
{
int m, n, o, p;
char *s;

if (s1 == NULL && s2 == NULL)
{
return (s1 = "");
return (s2 = "");
}
for (m = 0; m < s1[m]; m++)
{
for (n = 0; n < s2[n]; n++)
{
p = m + n;
}
}
s = malloc((sizeof(char) * p) + 1);

if (s == NULL)
{
return (NULL);
}
n = 0;
while (o < p)
{
if(o <= m)
{
s[o] = s1[o];
}
if (o >= m)
{
s[o] = s2[n];
n++;
}
o++;
}
s[o] = '\0';
return (s);
}
