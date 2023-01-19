#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list to free
 */


void free_list(list_t *head)
{
list_t *holder;
while (head)
{
holder = head;
head = head->next;
free(holder->str);
free(holder);
}
}
