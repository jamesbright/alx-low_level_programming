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
dlistint_t *ptr = *head, *del_node = *head;

if (!(*head))
return (-1);

if (index == 0)
{
*head = del_node->next;
free(del_node);
if (*head)
{
(*head)->prev = NULL;
}
return (1);
}
while (i < index - 1 && ptr)
{
i++;
ptr = ptr->next;
}

if (i == index && ptr)
{

del_node = ptr->next;
if (del_node->next)
del_node->next->prev = ptr;
ptr->next = del_node->next;
free(del_node);
return (1);
}

return (-1);
}
