#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the begining of a list
 * @head: start of the list
 * @str: value to be used
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str =strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;
return (*head);
}
