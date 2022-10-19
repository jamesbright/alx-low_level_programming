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
if(i >= 10)
{
int digit, lastDigit, firstDigit;
lastDigit = i % 10;

while( i >= 10)
i = i / 10;

firstDigit = i;
_putchar(firstDigit + '0');
_putchar(lastDigit + '0');
}
else
{
_putchar(i + '0');
}
if (i == 98)
continue;
_putchar(',');
_putchar(' ');
}
}
