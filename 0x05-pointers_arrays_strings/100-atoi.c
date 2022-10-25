#include "main.h"
#include <limits.h>

/**
 * _atoi - function converts a string to a number
 * Description: converts a string into a number
 * @s: character to be converted
 * Return: converted number
 */

int _atoi(char *s)
{
int i = 0, sign = 1, num = 0, result;
while ((s[i] == ' ' || s[i] == '-' ||
s[i] == '+') && !(s[i + 1] >= '0'
&& s[i + 1] <= '9'))
{
i++;
}
if (s[i - 1] == '-' || s[i - 1] == '+')
{
sign = 1 - 2 * (s[i - 1] == '-');
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] - '0' > 7))
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
num = 10 * num + (s[i++] - '0');
}
result = num *sign;
return (result);
}
