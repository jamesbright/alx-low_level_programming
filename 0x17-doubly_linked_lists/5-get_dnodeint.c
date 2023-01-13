#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at an index
 * @head: linked list to check
 * @index: index of the node
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t nth_node = NULL;
while(head && i <= index)
{
if (i == index)
{
nth_node = head;
break;
}
head = head->next;
i = i + 1;

return (nth_node);
}
