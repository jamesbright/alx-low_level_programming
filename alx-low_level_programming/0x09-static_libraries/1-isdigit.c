#include <ctype.h>

/**
 * _isdigit - checks if a number is a digit
 * Description: checks if a number is a digit and returns a value
 * @c: number to be checked
 * Return: return 1 if @c is digit else return 0
 */

int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
