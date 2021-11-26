#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: list node
 *
 * Return: returns the number of elements in a list.
 */
size_t dlistint_len(const dlistint_t *h)
{
int var_list;
while (h)
{
h = h->next;
var_list++;
}
return (var_list);
}
