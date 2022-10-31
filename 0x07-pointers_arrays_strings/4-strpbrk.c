#include <string.h>
#include "main.h"
/**
 * _strpbrk - gets the length of a prefix substring
 * Description: gets the initial number of bytes
 * in the segment
 * @s: string s
 * @accept: string to find
 * Return: number of bytes
 */
char *_strpbrk(char *s, char *accept)
{
if (s == NULL || accept == NULL)
return (NULL);
while (*s)
{
if (strchr(accept, *s))
return (s);
else
s++;
}
return (NULL);
}
