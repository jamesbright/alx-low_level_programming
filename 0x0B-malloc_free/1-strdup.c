#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - copies and returns a pointer to a new string
 * Description: memory for the new string is obtained with malloci.
 * and can be freed with free.
 * @str: string to be copied
 * Return: returns a pointer or NULL
 */

char *_strdup(char *str)
{
int str_size = strlen(str);
char *s = NULL;
char *s_offset = NULL;

if (str == (char *)NULL)
return (NULL);

s = (char *)malloc(sizeof(char) * str_size + 1);

if (s != NULL)
{
s_offset = s;
while (*str)
{
*s_offset = *str;
s_offset++;
str++;
}
*s_offset = '\0';
}

return (s);

}
