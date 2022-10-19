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
digit    = (int)log10(i);    
firstDigit = (int) (i / pow(10, digit));
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
