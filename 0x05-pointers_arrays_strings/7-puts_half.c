#include "main.h"

/**
 * puts_half - function to put half of a string
 * Description: function prints half of string
 * @str: variable
 */

void puts_half(char *str)
{
int i = 0, n = 0, j;
while (*(str + i))
i++;
j = i / 2;
if (!(i % 2))
{
n = strlen(str) - 1 / 2;
_putchar(*(str + n));
}
j += 1;
while (j < i)
{
_putchar(*(str + j));
}
_putchar('\n');
}
