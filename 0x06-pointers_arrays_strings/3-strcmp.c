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
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}

return ((unsigned char)*s1 - (unsigned char)*s2);
}

