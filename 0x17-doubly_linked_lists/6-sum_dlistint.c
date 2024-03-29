#include "lists.h"

/**
 * sum_dlistint - sums data of all nodes in a linked
 * list.
 * @head: linked list
 * Return: sum of all nodes data
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);

while (head)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
