#include "function_pointers.h"

/**
 * array_iterator - perform an action on each element of an array
 * @array: the array to iterate over
 * @size: size of array
 * @action: the action to perform
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
do 
{
action(*array++);
}
while (size--);
}
}
