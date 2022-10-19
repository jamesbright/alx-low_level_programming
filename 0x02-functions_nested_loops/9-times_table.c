#include <stdio.h>
#include "main.h"

/**
 * times_table - prints 9x multiplication table
 * Description: prints 0 to 9 times multiplication table in a tabular form
 */

void times_table(void)
{
int num = 0, result, i, j;
for (i = 0; i <= 9; i++)
{

for (j = 0; j <= 9; j++)
{

result = num * j;
printf("%3d", result);

if (j == 9)
continue;

printf("%s", ",");
}
printf("%s", "\n");

num++;
}

}
