#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum integer
 * @max: maxmum integer
 *
 * Return: Pointer
 */

int *array_range(int min, int max)
{
int arr;
int *p;

if (min > max)
{
return (NULL);
}
p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
{
return (NULL);
}
arr = 0;
while (min <= max)
{
p[arr] = min;
min++;
arr++;
}
return (p);
}
