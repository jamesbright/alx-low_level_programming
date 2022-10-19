#include <stdio.h>
#include "main.h"

void my_putchar(long var) {

    /* print '-' for negative numbers */
    if (var < 0) {
        putchar('-');
        var = var * -1;
    }
    
    if (var/10)
        my_putchar(var/10);

    putchar(var%10 + '0');
}

void times_table(void)
{
int num = 0, result, i, j;
for(i = 0; i <= 9; ++i)
{
_putchar('\n');
for (j = 0; j <= 9; ++j)
{
result = num * j;
my_putchar(result);

if (j == 9)
continue;
_putchar(',');
_putchar(' ');
}
num++;
}
}
