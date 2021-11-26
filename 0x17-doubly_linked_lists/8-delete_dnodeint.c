#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: pointer to pointer to head
 *@index: position to delete 
 *
 * Return: 1 on success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temporary_node;

if (*head == NULL)
return (NULL);

temporary_node = *head;
for (; index != 0; index--)
{
if (temporary_node == NULL)
return (-1);
temporary_node = temporary_node->next;
}
if (temporary_node == *head)
{
*head = temporary_node->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
temporary_node->prev->next = temporary_node->next;
if (temporary_node->next != NULL)
temporary_node->next->prev = temporary_node->prev; 
}
free(temporary_node);
return (1);
}
