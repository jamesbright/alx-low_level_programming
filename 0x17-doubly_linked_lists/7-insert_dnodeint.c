#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at an index
 * @h: linked list to insert into
 * @idx: index of the node
 * @n: new node data
 * Return: inserted node at index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

while (*h && i <= idx)
{
if (i == idx)
{
new_node->next = *h->next;
new_node->prev = *h;
break;
}
*h = *h->next;
i = i + 1;
}
return (new_node);
}
