#include "main.h"

/**
 * _strcmp - compares two strings
 * Description: compares two strings and return a number less than, equal to 
 * . or greater than 0. if first string is less than, equal to, or greater
 * than second string respectively
 * @s1: first string
 * @s2: second string
 * Return: number
 */

int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] && s2[i]; ++i)
{
if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i])
continue;
else
break;
}

if (s1[i] == s2[i])
return (0);

if ((s1[i] | 32) < (s2[i] | 32))
return (-15);

return (15);
}
