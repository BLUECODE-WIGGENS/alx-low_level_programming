#include "lists.h"

/**
 *get_nodeint_at_index - return nth node of the list
 *@head: pointer to a head
 *@index: integer
 *
 *Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr;
unsigned int i = 0;

ptr = head;

if (ptr == NULL)
return (NULL);

while (ptr != NULL)
{
if (i == index)
return (ptr);
i++;
ptr = ptr->next;
}
return (ptr);
}
