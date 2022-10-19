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
if(i > 98)
{
for(; i >= 98; i--)
{
printf("%d", i);

if (i == 98)
continue;
_putchar(',');
_putchar(' ');

}
}
else if(i < 98)
{
for(; i <= 98 i++)
{

printf("%d", i);

if (i == 98)
continue;
_putchar(',');
_putchar(' ');
}
}
else if(i == 98)
printf("%d", i);
}
