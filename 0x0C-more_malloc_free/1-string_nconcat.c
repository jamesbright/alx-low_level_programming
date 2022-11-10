#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * Description: concatenates two strings and returns a pointer to it
 * @s1: string 1
 * @s2: string 2
 * @n: offset
 * Return: pointer to concatenated string or NULL
 */

char *str_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
int i, j, k, m;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
if (n >= strlen(s2))
for (j = 0; s2[j] != '\0'; j++)
;
else
for (j = n; s2[j] != '\0'; j++)
;

str = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
if (str == NULL)
return (NULL);

for (k = 0, m = 0; k < (i + j + 1); k++)
{
if (k < i)
str[k] = s1[k];
else
str[k] = s2[m++];
}

return (str);
}

