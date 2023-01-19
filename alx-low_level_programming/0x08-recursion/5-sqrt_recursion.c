#include "main.h"

/**
 * sqroot - checks for perfect square root
 * @n: input
 * @i: iterator
 * Return: square root
 */
int sqroot(int n, int i)
{
if (i < 1)
return (-1);
else if (i * i == n)
return (i);
else
return (sqroot(n, i - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find
 * Return: -1 or square root of n
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (sqroot(n, (n + 1) / 2));
}


