#include "search_algos.h"

/**
 * linear_search - a simple search algorithm
 * @array: a list of integers to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Description: function traverses through an array of integers in search
 * of a value and returns the index of the value if found or -1 if not found
 * Return: -1 if not found or array is NULL OR index if found
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

while(i < size)
{
printf("Value checked array[%li] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
i++;
}
return (-1);
}
