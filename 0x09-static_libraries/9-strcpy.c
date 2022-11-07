#include "main.h"
#include <string.h>
/**
 * _strcpy - function copies values of an array pointer
 * Description: copies values of one string into
 * another string
 * @dest: destination of copied value
 * @src: value src
 * Return: value of copied string
 */

char *_strcpy(char *dest, char *src)
{
int i = 0, len;
len = strlen(src);

while (i < len + 1)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
