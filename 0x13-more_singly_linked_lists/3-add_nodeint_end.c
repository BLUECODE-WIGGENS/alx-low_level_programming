#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer t pointer heard
 * @n: integer to add
 *
 * Return: the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *ptr_new;

if (head == NULL)
return (NULL);

ptr_new = malloc(sizeof(listint_t));

if (ptr_new == NULL)
return (NULL);

ptr_new->n = n;
ptr_new->next = NULL;

if (*head == NULL)
{
*head = ptr_new;
return (ptr_new);
}

ptr = *head;

while (ptr->next)
ptr = ptr->next;

ptr->next = ptr_new;
return (ptr_new);
}
