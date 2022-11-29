#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: list to reverse
 * Return: a pointer to the next node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *l_next;

if (head == NULL || *head == NULL)
return (NULL);

if ((*head)->next == NULL)
return (*head);

prev = *head;
l_next = prev->next;
*head = l_next->next;
prev->next = NULL;

while ((*head)->next != NULL)
{
l_next->next = prev;
prev = l_next;
l_next = (*head);
*head = (*head)->next;
}
(*head)->next = l_next;
l_next->next = prev;
return (*head);
}
