#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer heard
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *ptr;

if (head == NULL)
return;

while (*head != NULL)
{
ptr = *head;
*head = ptr->next;
free(ptr);
}
}
