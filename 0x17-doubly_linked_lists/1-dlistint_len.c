#include "lists.h"

/**
 * dlistint_len - get number of elements in a list
 * @h: linked list to check
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count = count + 1;
}
return (count);
}
