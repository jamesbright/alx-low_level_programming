#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * Description: function swaps integer values using their pointers
 * @a: first integer to swap
 * @b: second integer to swap
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
