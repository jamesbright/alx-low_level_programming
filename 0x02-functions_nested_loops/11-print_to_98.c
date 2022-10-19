#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints a range of numbers
 * Description: the number printed goes from given range to 98
 */
void print_to_98(int n)
{
int i;
i = n;
while( i != 98)
{

printf("%d", i);

if (i == 98)
continue;
_putchar(',');
_putchar(' ');
if(i > 98)
i--;
else
i++;
}
}
