#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * Description: creates an array of values
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *str = NULL;
unsigned int i;

if (size == 0)
return (NULL);


str = malloc(size * sizeof(char));
if (str != NULL)
{
for (i = 0; i < size; i++)
str[i] = c;
}

return (str);
}
