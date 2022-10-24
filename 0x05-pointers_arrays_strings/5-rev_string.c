#include "main.h"

/**
 * rev_string - function to reverse a string
 * Description: function to reverse a string in c
 * @s: variable
 */

void rev_string(char *s)
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
