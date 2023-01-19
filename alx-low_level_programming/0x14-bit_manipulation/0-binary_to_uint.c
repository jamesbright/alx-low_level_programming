#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 * Return: the converted number or 0 On error
 */

unsigned int binary_to_uint(const char *b)
{
int i = 0, r = 1;
unsigned int num = 0;


if (b == NULL)
return (0);

while (b[i + 1])
i++;

for (; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);

num += (b[i] - '0') * r;
r = r * 2;
}
return (num);
}
