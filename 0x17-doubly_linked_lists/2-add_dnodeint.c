#include "lists.h"

/**
 * add_dnodeint - add a node at the begining of a
 * linked list.
 * @head: linked list
 * @n: new node value
 * Return: new list with node added
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp = *head;
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

if(temp)
{
temp->prev = new_node;
new_node->next = temp;
}
else
{
new_node->next = NULL;
}
new_node->prev = NULL;
new_node->n = n;
*head = new_node;

return (new_node);

}
