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
int i, n = 0;
for (i = 0; i <= 9; i++, n++)
{
if (n > 0)
{
putchar(',');
putchar(' ');
}
putchar('0' + i);
}
putchar('\n');
return (0);
}
