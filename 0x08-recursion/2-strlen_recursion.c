#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: string to find the length
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
int len = 0;
if (*s != '\0')
{
len = (1 + _strlen_recursion(s + 1));
}
else
return (0);

return (len);
}
