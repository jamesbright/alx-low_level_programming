#include <stdlib.h>
#include "main.h"
/**
 * jack_bauer - print every minute of jack bauer
 * Description: prints time starting from 00:00 to 23:59
 * Return: returns time range
 */

void jack_bauer(void)
{
int i = 0, j = 0, k = 0, m;

for (m = 0; m <= 9; ++m)
{

_putchar('0' + i);
_putchar('0' + j);
_putchar(':');
_putchar('0' + k);
_putchar('0' + m);
_putchar('\n');
if (m == 9)
{
if (k == 5)
{
j++;
}
m = 0;
k++;
}
if (j == 9)
{
i++;
}

if (i == 2 && j == 3 && k == 5 && m == 9)
break;
}
}
