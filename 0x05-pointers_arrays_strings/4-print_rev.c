#include "main.h"

/**
 * print_rev - function reverses string
 * Description: function reverses string to another
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int i = 0;
while (*(s + i))
i++;
i = i - 1;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
