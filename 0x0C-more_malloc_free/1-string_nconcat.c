#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int a, b;
int c = n;
char *p;
int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

if (c >= j)
{
c = j;
p = malloc(sizeof(char) * (i + j + 1));
}
else
p = malloc(sizeof(char) * (i + n + 1));
if (p == NULL)
return (NULL);
for (a = 0; a < i; a++)
{
p[a] = s1[a];
}
for (b = 0; b < c; b++)
{
p[a++] = s2[b];
}
p[a++] = '\0';
return (p);
}
