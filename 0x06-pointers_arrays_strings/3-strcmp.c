#include "main.h"

/**
 *_strcmp - compare strings
 *@s1: a string to compare 
 *@s2: another string to compare
 *
 *Return: integer j
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;

while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
j += s1[i] - s2[i];
return (j);
}
