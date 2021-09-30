#include "function_pointers.h"

/**
 * int_index - returns the index of the first element.
 * @size: The number of elements in the array array.
 * @cmp: A pointer to the function to be used to compare values.
 * @array: Array of the values.
 *
 * Return: Returns (-1).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
