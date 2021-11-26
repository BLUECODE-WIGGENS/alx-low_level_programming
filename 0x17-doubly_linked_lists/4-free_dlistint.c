#include "lists.h"

/**
 *free_dlistint -  frees a list
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *new_node;

while (head)
{
new_node = head->next;
free(head);
head = new_node;
}
}
