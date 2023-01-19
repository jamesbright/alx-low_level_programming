#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: list to print
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
int n = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
n++;
h = h->next;
}
return (n);
}
