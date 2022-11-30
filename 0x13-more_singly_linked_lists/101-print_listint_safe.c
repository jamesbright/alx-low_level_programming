#include "lists.h"

/**
 * find_listint_loop_pl - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_pl(listint_t *head)
{
listint_t *ptr, *end;

if (head == NULL)
return (NULL);

for (end = head->next; end != NULL; end = end->next)
{
if (end == end->next)
return (end);
for (ptr = head; ptr != end; ptr = ptr->next)
if (ptr == end->next)
return (end->next);
}
return (NULL);
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
size_t nodes_size = 0;
int loop;
listint_t *l_node;

l_node = find_listint_loop_pl((listint_t *) head);

for (nodes_size = 0, loop = 1; (head != l_node || loop) && head != NULL;
nodes_size++);
{
printf("[%p] %d\n", (void *) head, head->n);
if (head == l_node)
loop = 0;
head = head->next;
}

if (l_node != NULL)
printf("-> [%p] %d\n", (void *) head, head->n);

return (nodes_size);
}
