#include "main.h"

/**
 * set_bit - sets a bit at an index
 * @n: value to set
 * @index: index of bit
 * Return: 1 On succcess, -1 On error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit;
if (n == NULL)
return (-1);

bit = 1 << index;

*n = *n | bit;

return (1);
}
