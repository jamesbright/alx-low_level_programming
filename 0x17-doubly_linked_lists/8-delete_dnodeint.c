#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: linked list to remove from
 * @index: index of the node
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
int flag = -1;
dlistint_t *ptr = *head;


if (index == 0)
{
ptr = ptr->next;
ptr->prev = NULL;
}


while (index > 1 && ptr && ptr->next)
{
ptr = ptr->next;
index--;
}


if (ptr->next != NULL)
{
ptr->next->prev = ptr->prev;
ptr->prev = ptr->next;
flag = 1;
}

return (flag);
}
