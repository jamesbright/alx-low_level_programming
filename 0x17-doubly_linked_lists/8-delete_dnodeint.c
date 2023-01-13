#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: linked list to remove from
 * @index: index of the node
 * Return: inserted node at index
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *ptr = *head;
if (h == NULL)
return (NULL);
if (index == 0)
{
ptr = ptr->next;
ptr->prev = NULL;
}


while (idx > 1 && ptr && ptr->next)
{
ptr = ptr->next;
idx--;
}


if (ptr->next != NULL)
ptr->next->prev = *ptr->prev;
ptr->prev = ptr->next;


return (ptr);
}
