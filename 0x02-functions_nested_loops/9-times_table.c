#include <stdio.h>
#include "main.h"

void times_table(void)
{
int num = 0, result, i, j;
for(i = 0; i <= 9; ++i)
{
_putchar('\n');
for (j = 0; j <= 9; ++j)
{
result = num * j;
if (result >= 10)
{
   int lastDigit, firstDigit;
    lastDigit = result % 10;
   
    while(result >= 10)
    {
        result = result / 10;
    }
    firstDigit = result;
_putchar('0' + firstDigit);
_putchar('0' + lastDigit);
}
else
{
_putchar('0' + (result % 10));
}
if (j == 9)
continue;
_putchar(',');
_putchar(' ');
if (result > 9)
_putchar(' ');
num++;
}
}
}
