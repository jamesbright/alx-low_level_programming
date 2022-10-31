#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_chessboard - prints the board of cheese
 * Description: prints a cheese dashboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
ifor (j = 0; j < 8; j++)
{
if (j == 7)
printf("%d\n", a[i][j]);
else
printf("%d", (a[i][j]);
}
}
}
