
#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list.
 *@h: pointer to head
 *
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
unsigned int num = 0;
const list_t *ptr;

ptr = h;

while (ptr != NULL)
{
num++;
ptr = ptr->next;
}
return (ptr);
}
