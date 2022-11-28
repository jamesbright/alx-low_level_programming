#include "lists.h"

/**
 * get_nodeint_at_index - finds and returns the nth node of a linked list
 * @head: start of list
 * @index: position of node to find
 * Return: nth node at position @index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *nth_node;
if (head == NULL)
return (NULL);

while (head != NULL)
{
if (i == index)
{
nth_node = head;
nth_node->next = head->next;
return (nth_node);
}
head = head->next;
i++;
}
return (NULL);
}
