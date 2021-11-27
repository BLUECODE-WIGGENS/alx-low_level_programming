#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: list node
 *
 * Return: returns the number of elements in a list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t var_list;

for (var_list = 0; h != NULL; var_list++)
{
h = h->next;
}
return (var_list);
}
