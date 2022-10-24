#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - function to print array
 * Description:  function prints an array
 * @a: pointer variable
 * @n: array variable
 */

void print_array(int *a, int n)
{
int i = 0;
while (*(a + i) && (i < n))
{
if (i != n - 1)
printf("%d, ", *(a + i));
else
printf("%d", *(a + i));
i++;
}
putchar('\n');
}
