#include <stdio.h>
#include "main.h"

void times_table(void)
{
int num = 0, result, i, j;
for(i = 0; i <= 9; ++i)
{

printf("%s", "\n");
for (j = 0; j <= 9; ++j)
{
result = num * j;
printf("%d", result);
if (j == 9)
continue;
printf("%s", ", ");
}
num++;
}
}
