#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * Description: function prints a diagonal line according to
 * number of arguments
 * @n: number of diagonal lines to print
 */

void print_diagonal(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
_putchar('\\');
_putchar('\n');
}
}

