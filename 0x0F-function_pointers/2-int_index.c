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
int i;

if (size <= 0)
return (-1);

if (cmp && array)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 0)
continue;
else
{
return (i)
}
}
}
return (-1);
}
