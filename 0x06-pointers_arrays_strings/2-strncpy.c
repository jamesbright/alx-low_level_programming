#include "main.h"

/**
 * _strncpy - copies a string
 * Description: function copies a string from a src to a destination
 * @dest: destination string
 * @src: source string
 * @n size of src string
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}
