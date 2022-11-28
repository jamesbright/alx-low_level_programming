#include "main.h"

/**
 * sum_listint - sums all the data of a list
 * @head: head of the list
 * Return: sum of all sata in the list
 */

int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
sum = sum + head->n;
}
return (sum);
}
