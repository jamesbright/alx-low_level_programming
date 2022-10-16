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
int i;
for (i = 0; i <= 9; ++i)
{
putchar('0' + i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
