#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: index to insert from
 * @head: list to insert into
 * @n: data of new node
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new_node, *temp;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
temp = *head;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (*head);
}


while (temp != NULL)
{
if (i == idx - 1)
{
new_node->next = temp->next;
temp->next = new_node;
}
i++;
temp = temp->next;
}

if (idx > i)
return (NULL);

return (new_node);
}
