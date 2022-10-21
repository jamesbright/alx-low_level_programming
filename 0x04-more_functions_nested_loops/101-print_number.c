#include "main.h"

/**
 * print_number - prints numbers
 * Description: this function prints numbers
 * @n: the number to be printed
 */

void print_number(int n)
{
if (n / 10 != 0)
{
_putchar(i % 10);
print_number((n - n % 10) / 10);
}
}
