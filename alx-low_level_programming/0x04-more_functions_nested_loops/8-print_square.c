#include "main.h"
/**
 * print_square - prints squares
 * Description: function prints squares
 * @size: size of square to print
 */

void print_square(int size)
{
int i, j;
if (size < 1)
{
_putchar('\n');
}
else
{
for (i = size; i >= 1; i--)
{

for (j = size; j >= 1; j--)
_putchar('#');

_putchar('\n');
}
}
}
