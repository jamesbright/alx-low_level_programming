#include "main.h"

/**
 * factorial - returns factorial of n
 * @n: factorial number
 * Return: factorial of n if success 0r -1 if error
 */

int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
