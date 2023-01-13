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
dlistint_t *ptr = *h;
if (h == NULL)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
while (ptr && i <= idx)
{
if (i == idx && ptr->next != NULL)
{
ptr->next->prev = new_node;
new_node->next = ptr->next;
new_node->prev = ptr;
ptr = new_node;
break;
}
i = i + 1;
ptr = ptr->next;
}
return (new_node);
}
