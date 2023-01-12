#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of list
 * @head: linked list
 * @n: new node value
 * Return: updated list
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = *head;
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

if (temp)
{
new_node->prev = temp;
temp->next = new_node;
}
else
{
new_node->prev = NULL;
}
new_node->next = NULL;
new_node->n = n;
*head = temp;

return (temp);
}
