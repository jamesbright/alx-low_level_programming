#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: linked list to remove from
 * @index: index of the node
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *ptr = *head;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
ptr = ptr->next;
ptr->prev = NULL;
*head = ptr;
return (1);
}
while (i < index - 1 && ptr)
{
i++;
ptr = ptr->next;
}

if (i == index && ptr)
{

ptr->next->prev = ptr->prev;
ptr->next = ptr->next->next;
*head = ptr;
return (1);
}

return (-1);
}
