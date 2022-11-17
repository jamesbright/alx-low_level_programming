#include "function_pointers.h"

/**
 * int_index - searches and returns the index
 * @array: array to be searched
 * @size: size of array
 * @cmp: compare values
 * Return: index of found integer or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i, index = -1;

if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 0)
continue;
else
{
index = i;
break;
}
}
return (index);
}
