#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: list node
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int var_list = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
var_list++;
}
return (var_list);
}
