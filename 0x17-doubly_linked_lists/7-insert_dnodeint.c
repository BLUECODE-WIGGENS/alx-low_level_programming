#include "lists.h"

/**
 * insert_dnodeint_at_index - nserts a new node at a given position
 * @h: pointer to head
 * @idx: position to insert node
 * @n: data
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temporary_node;

if (idx == 0)
return (add_dnodeint(h, n));

if (h == NULL)
return (NULL);

temporary_node = *h;
while (idx > 1 && temporary_node && temporary_node->next)
{
temporary_node = temporary_node->next;
--idx;
}
if (idx > 1 || !temporary_node)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = temporary_node;
new_node->next = temporary_node->next;

if (temporary_node->next)
temporary_node->next->prev = new_node;
temporary_node->next = new_node;

return (new_node);
}
