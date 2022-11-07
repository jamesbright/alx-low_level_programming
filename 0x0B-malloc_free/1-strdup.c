#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - copies and returns a pointer to a new string
 * Description: memory for the new string is obtained with malloc. 
 * and can be freed with free.
 * @str: string to be copied
 * Return: returns a pointer or NULL
 */

char *_strdup(char *str)
{
if (str == NULL)
return (NULL);

int str_size = strlen(str);
char *s;
char *s_offset;
s = malloc(sizeof(char) * str_size + 1);

s_offset = s;

while (*str)
{
*s_offset = *str;
s_offset++;
str++;
}
*s_offset = '\0';
return (s);

}
