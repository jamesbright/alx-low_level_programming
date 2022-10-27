#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array
 * Description prints an array in a reversed order
 * @a: array
 * @n:size of a
 */

void reverse_array(int *a, int n)
{
int i = n - 1;
while (i >= 0)
{
printf("%d", a[i]);
if (i > 0)
{
printf(", ");
}

i--;
}

}
