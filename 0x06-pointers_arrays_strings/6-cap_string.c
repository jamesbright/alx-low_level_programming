#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes string
 * Description: capitalizes the first alphabet in a group of words
 * @str: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *str)
{
int i, len = strlen(str);
for (i = 0; i < len; i++)
{
if ((str[i] >= 'a' && str[i] <= 'z') && !((str[i - 1] >= 'a'
&& str[i - 1] <= 'z') || (str[i - 1] >= 'A'
&& str[i - 1] <= 'Z')))
str[i] = str[i] - 'a' + 'A';
}
return (str);
}
