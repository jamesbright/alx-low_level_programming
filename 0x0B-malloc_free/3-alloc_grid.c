#include "main.h"

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
int *array_elem[width][height];
int i, j;
if (width == 0 || height == 0)
return (NULL);

*array_pointer = array_elem;

for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
array_elem[i][j] = 0;
}
}
return (array_pointer);
}
