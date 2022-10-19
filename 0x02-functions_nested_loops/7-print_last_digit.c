#include <stdlib.h>

/**
 * print_last_digit - Prints last digit of a number
 * Description: takes an int and prints the last digit 
 * @n: integer number
 * Return: returns the value of the last digit of n
 */

int print_last_digit(int n)
{
int last_digit = n % 10;
return (last_digit);
}
