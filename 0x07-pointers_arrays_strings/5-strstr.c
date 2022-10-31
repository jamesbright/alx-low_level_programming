#include <string.h>
#include "main.h"


/**
 * _strstr - finds the first occurrence of a substring
 * Description: function finds the first occurrence
 * a substring and returns a pointer pointing to it
 * @haystack: pointer to a string to search
 * @needle: value to find
 * Return: a pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
char *hay_ptr;
hay_ptr = haystack;
if (hay_ptr == NULL || needle == NULL)
return (NULL);
while (*hay_ptr != '\0')
{
if (strncmp(hay_ptr, needle, strlen(needle)) == 0)
return (hay_ptr);
hay_ptr++;
}
return (NULL);
}
