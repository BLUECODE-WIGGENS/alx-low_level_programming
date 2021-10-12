#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * *@h: pointer to head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
int i = 0;
const listint_t *ptr;

ptr = h;
while (ptr != NULL)
{
if (ptr->n)
{
printf("%d\n", ptr->n);
}
ptr = ptr->next;
i++;
}
return (i);
}
