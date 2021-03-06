#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list.
 * @head: pointer to pointer head
 *
 * Return: on success 0.
 */

int pop_listint(listint_t **head)
{
listint_t *ptr;
int n;

if (*head == NULL)
return (0);

else
ptr = *head;
n = (*head)->n;
*head = (*head)->next;

free(ptr);

return (n);
}
