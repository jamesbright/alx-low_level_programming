#include "main.h"

/**
 * _puts_recursion - puts character to stdout recursively
 * @s: input character
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
