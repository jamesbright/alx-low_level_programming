#include "main.h"

/**
 * puts2 - function to print character
 * @str: variable
 * Description: function to print all characters in a
 */

void puts2(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
}
