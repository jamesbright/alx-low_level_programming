#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_chessboard - prints the7 board of cheese
 * Description: prints a cheese dashboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if (j == 7)
{
_putchar(a[i][j]);
_putchar('\n');
}
else
_putchar(a[i][j]);
}
}
}
