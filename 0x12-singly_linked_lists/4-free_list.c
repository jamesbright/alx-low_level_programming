#include "main.h"

/**
 * free_list - frees a linked list
 * @head: list to free
 */


void free_list(list_t *head)
{
free(head);
}
