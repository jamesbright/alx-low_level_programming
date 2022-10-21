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
_putchar(n % 10);
print_number((n - n % 10) / 10);
}
else if ((n / 10 == 0) && (n % 10 != 0) && (n > 0))
{
_putchar(n % 10 + '0');
}
else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
{
_putchar('-');
_putchar(-n % 10 + '0');
}
}
