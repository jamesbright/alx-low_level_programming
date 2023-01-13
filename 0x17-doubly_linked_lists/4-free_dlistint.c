#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: linked list to free
 */


void free_dlistint(dlistint_t *head)
{
dlistint_t *ptr = head;

while (head)
{
head = head->next;
free(ptr);
ptr = head;
}
}
