#include "main.h"

/**
 * print_most_numbers - prints  a range of numbers
 * Description: function prints a range of numbers except 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
continue;
_putchar('0' + i);
}
_putchar('\n');
}

