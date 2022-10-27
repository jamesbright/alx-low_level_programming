#include "main.h"

/**
 * leet - encodes a string into 1337
 * Description: function encodes a string into 1337 leet
 * @str: string to be encoded
 * Return: encoded strinf
 */

char *leet(char *str)
{
char l[] = {'a','e','o','t','l'};
char n[] = {4,3,0,7,1};
int i;
while(*str)
{
for (i = 0; i < 5; i++)
{
if (*str == l[i] || *str == l[i] - 32)
*str = n[i] + '0';
}
str++;
}
return (str);
}
