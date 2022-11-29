#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: linked list
 * @index: index of node to delete
 * Return: 1 if successful, else return -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *l_next;

if (head == NULL || *head == NULL)
return (-1);

temp = *head;

if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
if (index == 1)
{
temp = (*head)->next;
(*head)->next = temp->next;
free(temp);
return (1);
}

while (--index)
{
if (temp->next == NULL)
return (-1);

temp = temp->next;
l_next = temp->next;
}
temp->next = l_next->next;
free(l_next);

return (1);
}
