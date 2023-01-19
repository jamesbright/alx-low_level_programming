#include "lists.h"

/**
 * pop_listint - deletes a head node and returns the head node data
 * @head: head node
 * Return: data stored in @head
 */

int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

while (*head)
{
temp = *head;
*head = (*(head))->next;
n = temp->n;
free(temp);
return (n);
}

return (0);
}
