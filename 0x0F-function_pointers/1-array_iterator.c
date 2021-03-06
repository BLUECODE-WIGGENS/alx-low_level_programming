#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given to it.
 * @array: An array to iterate.
 * @size: The size of the array.
 * @action: A pointer to the function you need to use.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
