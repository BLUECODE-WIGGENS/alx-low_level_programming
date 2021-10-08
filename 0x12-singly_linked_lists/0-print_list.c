#include "lists.h"

/**
 *print_list - Prints all the elements of a list_t list
 *@h: pointer to head
 *
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
unsigned int num = 0;
const list_t *ptr;

ptr = h;

while (ptr != NULL)
{
if (ptr->str)
{
printf("[%u] %s\n", ptr->len, ptr->str);
}
else
{
printf("[%u] %s\n", 0, "(nil)");
}
ptr = ptr->next;
num++;
}
return (num);
}
