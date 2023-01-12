#include "lists.h"

/**
 * add_dnodeint - add a node at the begining of a
 * linked list.
 * @h: linked list
 * Return: new list with node added
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp = *head;
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

temp->prev = new_node;
new_node->n = n;
new_node->next = temp;
new_node->prev = NULL;
*head = new_node;

return (new_node);

}
