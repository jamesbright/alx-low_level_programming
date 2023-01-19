#include <stddef.h>
#include "main.h"
/**
 * _strchr - finds a character and returns it's pointer
 * Description: returns a pointer to the first occurrence of the character
 * c in the string s, or null if the character is not found
 * @s: string to search
 * @c: character to find
 * Return: pointer to c or null
 */

char *_strchr(char *s, char c)
{
char *found = NULL;
while (*s)
{
if (*s == c)
{
found = s;
break;
}
s++;
}
return (found);
}

