#include "main.h"
#include <string.h>
/**
 * puts_half - function to put half of a string
 * Description: function prints half of string
 * @str: variable
 */

void puts_half(char *str)
{
int n = 0, len = strlen(str);
if (len % 2 == 0)
n = len / 2;
else
n = len - 1 / 2;
while (*(str + n))
{
_putchar(*(str + n));
n++;
}
_putchar('\n');
}
