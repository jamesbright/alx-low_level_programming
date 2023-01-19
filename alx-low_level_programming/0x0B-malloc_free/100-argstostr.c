#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 *@ac: arguments count
 *@av: arguments list
 * Return: a pointer to a new concatenated string or null
 */
char *argstostr(int ac, char **av)
{
int i;
int j;
char *s = NULL;
int k;
int m;

k = 0;
m = 0;
if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
m++;
}
}

s = (char *)malloc(m + ac + 1 * sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
k++;
}
s[k] = '\0';
return (s);
}
