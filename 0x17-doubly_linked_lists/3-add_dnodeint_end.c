#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: head pointer
 * @n: data variable
 *
 * Return: the address of the new element, or NULL if if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *current_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;
if(*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
}
else
{
current_node = *head;

while (current_node != NULL)
{
current_node = current_node->next;
}
current_node->next = new_node;
new_node->prev = current_node;
new_node->next = NULL;
}
return (new_node);
}
