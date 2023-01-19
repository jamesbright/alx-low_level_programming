#include "main.h"

/**
 * _print_rev_recursion - prints char in reverse with recursion
 * @s: character to print
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
_print_rev_recursion(s + 1);
else
return;
_putchar(*s);
}
