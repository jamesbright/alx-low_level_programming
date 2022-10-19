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
_putchar(result + '0');

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
