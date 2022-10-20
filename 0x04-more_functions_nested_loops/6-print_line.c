#include "main.h"

/**
 * print_line - print a straight line
 * Description: function prints a straight line according to
 * number of arguments
 * @n: number of straight lines to print
 */

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
_putchar('_');
_putchar('\n');
}
}
