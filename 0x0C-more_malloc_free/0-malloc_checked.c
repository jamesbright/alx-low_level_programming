#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memomry using malloc
 * Description: allocates a memory and checks for fail
 * @b: size of memory to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit (98);
return (ptr);
}
