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
unsigned int index, count = 0;
dlistint_t *new_node;
dlistint_t *ptr = *h;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h)
(*h)->prev = new_node;
*h = new_node;
return (*h);
}

index = idx - 1;

while (count != index && ptr)
{
count++;
ptr = ptr->next;

}


if (ptr && count == index)
{
new_node->prev = ptr;
new_node->next = ptr->next;
if (ptr->next)
ptr->next->prev = new_node;
ptr->next = new_node;
return (new_node);
}
free(new_node);
return (NULL);
}
