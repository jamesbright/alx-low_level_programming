#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates memory to array
 * Description: allocates and returns a pointer to a 2 dimensional array
 * of integers
 * @width: array row
 * @height: array column
 * Return: pointer to a 2 dimensional array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
int **array_pointer;
int i, j;

if (width == 0 || height == 0)
return (NULL);

array_pointer = malloc(height * sizeof(*array_pointer));

for (i = 0; i < height; i++)
{
array_pointer[i] = malloc(width * sizeof(**array_pointer));
if (array_pointer[i] == NULL)
{
for (i--; i >= 0; i--)
free(array_pointer[i]);
free(array_pointer);
return (NULL);
}

for (j = 0; j < width; j++)
{
array_elem[i][j] = 0;
}
}
return (array_pointer);
}
