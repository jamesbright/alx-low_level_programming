#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power y
 * @x: integer raised to y
 * @y: power of x
 * Return: return -1 if y is < 0 otherwise return x^y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
