#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: list element
 * @Return: number of elements
 */


size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i = i + 1;
}
return (i);
}
