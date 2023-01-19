#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function to print a range of numbers
 * Description: prints a range of numbers from 0 - 14
 */

void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
printf("%d", j);
}
printf("%s", "\n");
}
}
