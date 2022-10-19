#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints a range of numbers
 * Description: the number printed goes from given range to 98
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
_putchar(i);
if (i == 98)
continue;
_putchar(',');
_putchar(' ');
}
}
