#include "main.h"

/**
 * print_triangle - prints triangle
 * Description: function prints triangle in a certain order
 * @size: size of triangle to print
 */

void print_triangle(int size)
{
int i, j;
if (size < 1)
{
_putchar('\n');
}
else
{
i = 0, j = 0;
while (i < size)
{
while (j < size)
{
if (j < size - i - 1)
_putchar(' ');
else
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
_putchar('\n');
}
}
