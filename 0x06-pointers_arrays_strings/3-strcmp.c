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
int result = 0;
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}

if (*s1 == *s2)
result = 0;

else if (*s1 < *s2)
result = -15;

else
result = 15;

return (result);
}
