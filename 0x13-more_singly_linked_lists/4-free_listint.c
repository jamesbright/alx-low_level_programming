#include "lists.h"

/**
 * free_listint - frees a linked list memory
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while(head->next != NULL)
{
temp = head;
head = head->next;
free(temp);
}

}
