#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * Description: function prints a diagonal line according to
 * number of arguments
 * @n: number of diagonal lines to print
 */

void print_diagonal(int n)
{
int c = 0, i;

while (n > 0)
{
i = c;
while (i > 0)
{
_putchar(' ');
i--;
}
_putchar('\\');
_putchar('\n');
c++;
n--;
}

if (c < 1)
_putchar('\n');

}
