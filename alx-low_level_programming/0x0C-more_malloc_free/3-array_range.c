#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates arrays of integers
 * Description:  the array created contains all the values from min to max
 * @min: min range
 * @max: max range
 * Return: created array
 */

int *array_range(int min, int max)
{
int *str;
int i, s, j;

if (min > max)
return (NULL);

s = max - min;

str = malloc((s + 1) * sizeof(int));

for (i = 0, j = min; j <= max; i++, j++)
str[i] = j;

return (str);
}
