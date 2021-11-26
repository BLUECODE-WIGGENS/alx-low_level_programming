#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to head
 * @index: index of a node
 *
 * Return: returns the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temporary_node;
unsigned int var_node = 0;

temporary_node = head;
if (temporary_node == NULL)
return (NULL);

while (temporary_node)
{
if (var_node == index)
return (temporary_node);
var_node++;
temporary_node = temporary_node->next;
}
return (temporary_node);
}
