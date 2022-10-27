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
int i = 0, s1_count = 0, s2_count = 0;
while(s1[i] != '\0')
{
s1_count++;
i++;
}

while(s2[i] != '\0')
{
s2_count++;
i++;
}

if (s1_count < s2_count)
return (-15);
else if (s1_count > s2_count)
return (15);

return (0);
}
