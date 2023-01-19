#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * Description: does not consider src string to be null terminated
 * @dest: destination string
 * @src: source string
 * @n: n bytes of src string
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, dest_len = strlen(dest);
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
