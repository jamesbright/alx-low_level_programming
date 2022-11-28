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
listint_t *new_node, *tmp, *holder;

if (head == NULL || *head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
holder = *head;
tmp = (*(head))->next;

while (tmp != NULL)
{
if (i == idx)
{
holder->next = new_node;
new_node->next = tmp;
return (new_node);
}
holder = tmp;
tmp = tmp->next;
i++;
}

if(tmp == NULL && i == idx)
{
holder->next = new_node;
return (new_node);
}
free(new_node);
return (NULL);
}
