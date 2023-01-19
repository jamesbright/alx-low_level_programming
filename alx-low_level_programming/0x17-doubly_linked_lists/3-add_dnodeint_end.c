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

new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;

}
else
{
while (temp && temp->next)
temp = temp->next;

temp->next = new_node;
new_node->prev = temp;
}

return (new_node);
}
