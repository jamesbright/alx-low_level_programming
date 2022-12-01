#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: input
 * @index: index to clear
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit;

if (n == NULL)
return (-1);

bit = 1 << index;

if ((bit | *n) == *n)
*n = *n ^ bit;

return (1);
}
