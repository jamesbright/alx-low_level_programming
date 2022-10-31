#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of diagonal elements
 * Description: prints the left and right sum of
 * diagonal elements of a matrix
 * @a: matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i, j;
int l_sum = 0, r_sum = 0;
for (i = 0, j = 1; i < size; i++, j++)
{
l_sum = l_sum +  a[(size + 1) * i];
r_sum = r_sum + a[(size - 1) * j];
}
printf("%d, ", l_sum);
printf("%d", r_sum);
}
