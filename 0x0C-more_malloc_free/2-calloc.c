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
unsigned int n, i;
char *str;
if (nmemb == 0 || size == 0)
return (NULL);

n = nmemb * size;
str =  malloc(n);

if (str == NULL)
return (NULL);

while (i < n)
{
str[i] = 0;
i++;
}
return (str);
}
