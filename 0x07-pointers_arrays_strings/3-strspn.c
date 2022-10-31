#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * Description: gets the initial number of bytes in the segment
 * @s: string s
 * @accept: string to find
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept);
{
unsigned int len = 0;
if ((s == NULL) || (accept == NULL))
return (len);
while (*s && strchr(accept, *s++))
{
len++;
}
return (len);
}
