#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: list to reverse
 * Return: a pointer to the next node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *ptr, *first, *second;

if (head == NULL || *head == NULL)
return (NULL);

first = *head;
second = NULL;

ptr = first;
while (ptr->next != second)
{
prev = ptr;
ptr = ptr->next;
}

if (prev != NULL)
prev->next = first;
second = first->next;
first->next = ptr->next;
if (first != ptr && second != first)
second = reverse_recur(second, first);
ptr->next = second;

*head = ptr; 
return (*head);
}
