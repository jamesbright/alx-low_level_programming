#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: linked list
 * Return: no of elements in h
 */

size_t listint_len(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
