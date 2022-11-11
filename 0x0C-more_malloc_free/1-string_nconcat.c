#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * Description: concatenates two strings and returns a pointer to it
 * @s1: string 1
 * @s2: string 2
 * @n: offset
 * Return: pointer to concatenated string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, k, m;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;

k = (i + n) * sizeof(*str);
str = malloc(k + 1);

if (str == NULL)
return (NULL);


for (m = 0; m < k && s1[m] != '\0'; m++)
str[m] = s1[m];

for (j = 0; m < k && s2[j] != '\0'; m++, j++)
str[m] = s2[j];

str[m] = '\0';
return (str);
}

