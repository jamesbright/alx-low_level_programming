#include "search_algos.h"

int greedy_helper(int *array, int value, int low, int high);

/**
 * greedy_helper - helper function for binary search
 * @array: an array of integer values
 * @value: value to find
 * @low: subarray left of mid
 * @high: subarray right of mid
 *
 * Description: Recursively splits array in half untill matching elem is found
 * Return: index if value. or -1, if not value or value is NULL
 */

int greedy_helper(int *array, int value, int low, int high)
{
int i, mid;

if (low + 1 == high)
return (-1);

printf("Searching in array: ");
for (i = low + 1; i < high; i++)
{
printf("%d", array[i]);
if (i + 1 < high)
printf(", ");
}
printf("\n");

mid = (low + high) / 2;
if (array[mid] == value)
return (mid);

if (value < array[mid])
return (greedy_helper(array, value, low, mid));
else
return (greedy_helper(array, value, mid, high));
}
/**
 * binary_search - searching with binary search algorithm
 * @array: an array of integer values
 * @size: size of the array
 * @value: value to find in the array
 *
 * Description: greedy algorithm repeated splits the array in halve untill
 * value is found
 * Return: -1 if value value is not found, or on NULL array. index if found
 */


int binary_search(int *array, size_t size, int value)
{
int index;

index = greedy_helper(array, value, -1, size);
if (index)
return (index);
return (-1);
}
