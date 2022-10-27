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
int temp, i;
int *first = a;
int *last = a + n - 1;
while (first < last)
{
temp = *first;
*first = *last;
*last = temp;
first++;
last--;
}
for (i = 0; i < n; i++)
{

if (i > 0)
{
printf(", ");
}
printf("%d", a[i]);

}
printf("\n");
}
