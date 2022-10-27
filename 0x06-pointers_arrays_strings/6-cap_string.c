#include "main.h"
#include <string.h>
#include <ctype.h>

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
if (!isalpha(str[i - 1]) && islower(str[i]))
str[i] = toupper(str[i]);
}
return (str);
}
