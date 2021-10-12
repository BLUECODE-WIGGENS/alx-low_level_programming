#include "lists.h"

/**
 * listint_len - that returns the number of elements in a list.
 * @h: pointer to head
 *
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
int i = 0;
const listint_t *ptr;

ptr = h;

while (ptr != NULL)
{
ptr = ptr->next;
i++;
}
return (i);
}
