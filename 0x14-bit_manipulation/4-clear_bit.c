#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: input
 * @index: index to clear
 * Return: 1 On success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit;

if (n == NULL)
return (-1);

bit = 1 << index;
if (bit == NULL)
return (-1);

if ((bit | *n) == *n)
*n = *n ^ bit;

return (1);
}
