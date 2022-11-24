#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list
 * @head: start of the list
 * @str: value to be used
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *last;
new = malloc(sizeof(list_t));

if (new == NULL)
{
free(new);
return (NULL);
}


new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = strlen(str);
new->next = NULL;

if (!*head)
{
*head = new;
return (new);
}

last = *head;
while (last->next != NULL)
last = last->next;

last->next = new;
return (new);

}

