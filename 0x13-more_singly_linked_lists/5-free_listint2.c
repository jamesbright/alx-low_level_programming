#include "lists.h"

/**
 * free_listint2 - frees a list by setting head to NULL
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL || *head == NULL)
return;

while (*head)
{
temp = *head;
*head = (*(head))->next;
free(temp);
}

*head = NULL;
}
