#include "main.h"
#include <string.h>

/**
 * print_rev - function reverses string
 * Description: function reverses string to another
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int i, temp, len = strlen(s);
for (i = 0; i < len / 2 ; i++)
{
temp = *s[i];
*s[i] = *s[len - i - 1];
*s[len - i - 1] = temp;
}
puts(s);
}
