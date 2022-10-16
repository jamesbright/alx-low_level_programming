#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - program prints string and returns 0
(* a blank line
 * Description: prints combination of numbers)?
 * a text is printed after the code is executed
 * Return: returns 0 at end of execution
 */
int main(void)
{
int i, j, k, n = 0;
for (i = 0; i < 100; i++, n++)
{
for (j = i;;)
{
if (n > 0)
{
if (j / 10 % 10 > j % 10)
break;
k = j / 10;
if (k == 0)
{
putchar(',');
putchar(' ');
}
}
putchar('0' + i);
putchar('0' + j);
}
}
putchar('\n');
return (0);
}
