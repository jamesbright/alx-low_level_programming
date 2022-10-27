#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates strings 
 * Description: concatenates strings by appending the src string to the 
 * end of the destination string
 * @dest: destination string
 * @src: src string
 * Return: conatenated string
 */

char *_strcat(char *dest, char *src)
{
int i, dest_len = strlen(dest);
for (i = 0; src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
