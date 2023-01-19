#include "main.h"

/**
 * get_bit - finds a bit at a given
 * @n: input
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int bit;

bit = (n >> index) & 1;

if ((bit == 1) || (bit == 0))
return (bit);
else
return (-1);
}
