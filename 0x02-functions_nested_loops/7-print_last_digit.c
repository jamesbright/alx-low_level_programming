#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * Description: takes an int and prints the last digit
 * @n: integer number
 * Return: returns the value of the last digit of n
 */

int print_last_digit(int n)
{
int last_digit = abs(n - ((int)(n / 10)) * 10);
_putchar('0' + last_digit);
return (last_digit);
}
