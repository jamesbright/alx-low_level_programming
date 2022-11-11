#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * desecription: function allocates memory for an array of size
 * @nmemb: elements of the array
 * @size: size of the array
 * Return: a pointer to the newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ar;
unsigned int ar_size, i;

if (nmemb == 0 || size == 0)
return (NULL);
ar_size = nmemb * size;
ar = malloc(ar_size);
if (ar == NULL)
return (NULL);
while (i < ar_size)
{
ar[i] = 0;
i++;
}
return (ar);
}
