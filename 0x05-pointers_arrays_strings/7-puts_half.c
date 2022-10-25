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
if (len % 2)
n = len / 2;
else
n = (len - 1) / 2;
while (*(str + n - 1))
{
_putchar(*(str + n - 1));
n++;
}
_putchar('\n');
}
