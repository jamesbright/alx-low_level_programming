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
int i, j;
for (i = 0; i <= 99; ++i)
{
for (j = 0; j <= 99; ++j)
{
if (i == 99)
continue;
if(i != j)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
