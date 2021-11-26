#include "lists.h"

/**
 * sum_dlistint - sums all the data of a linked list
 * @head: head pointer
 * 
 *Return: The sum of all the data of a list 
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temporary_node;
int sum = 0;

temporary_node = head;
while (temporary_node)
{
sum += temporary_node->n;
temporary_node = temporary_node->next;
}
return (sum);
}
