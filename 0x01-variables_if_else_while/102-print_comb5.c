#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * Description: This function prints all possible combinations of digit numbers
 * in paires.
 * Return: Always 0.
 */
int main(void)
{
int i, j, k, m;
for (i = 0; i <= 9; ++i)
{
for (j = 0; j <= 9; ++j)
{
for (k = 0; k <= 9; ++k)
{
for (m = 0; m <= 9; ++m)
{
if (j < m)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar(' ');
putchar((k % 10) + '0');
putchar((m % 10) + '0');
if (i == 9 && j == 8 && k == 9 && m == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
