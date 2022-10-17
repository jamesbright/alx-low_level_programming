#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * Description: this function prints the combination of three numbers
 * Return: Always 0.
 */
int main(void)
{
int i, j, k;
for (i = 0; i <= 9; ++i)
{
for (j = 0; j <= 9; ++j)
{
for (k = 0; k <= 9; ++k)
{
if (i < j && j < k)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar((k % 10) + '0');
if (i == 7)
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

