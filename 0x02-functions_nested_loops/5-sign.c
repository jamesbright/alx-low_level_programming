#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks the sign of a number
 * Description: This function checks the sign of a number, prints a value and
 * returns a value accordingly
 * @n: character to be checked
 * Return:  return 1 if n is positive, 0 if n is zero and -1 if n is negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
}
