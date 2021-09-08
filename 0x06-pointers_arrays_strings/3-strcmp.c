#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string to compare
 * @s2: another string to compare
 * 
 * return: string.
 */

int _strcmp(char *s1, char *s2)
{
int i;
int j;

while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;    
}
j += s1[i] - s2[i];
return (j);
}
