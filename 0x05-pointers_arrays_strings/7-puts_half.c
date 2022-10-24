#include "main.h"

/**
 * puts_half - function to put half of a string
 * Description: function prints half of string
 * @str: variable
 */

void puts_half(char *str)
{
int i, j = 0;
while (*(str + i))
i++;
j = i / 2;
if (i % 2)
j += 1;
while (j < i)
{
_putchar(*(str + j));
}
_putchar('\n');
}
