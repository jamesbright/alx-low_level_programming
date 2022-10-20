#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * Description: function prints a diagonal line according to
 * number of arguments
 * @n: number of diagonal lines to print
 */

void print_diagonal(int n)
{
int i = 0, j;

while (n < 0)
{
j = i;
while (j > 0)
{
_putchar(' ');
j--;
}
_putchar('\\');
_putchar('\n');
i++;
n--;
}

if (i < 1)
_putchar('\n');

}
