#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
int i = 0, counter, j, holder;

if (n == 0)
{
printf("0");
return;
}

holder = n;

while (holder != 0)
{
i++;
holder = holder >> 1;
}


for (counter = i - 1; counter >= 0; counter--)
{
j = n >> counter;
if (j & 1)
printf("1");
else
printf("0");
}
}
