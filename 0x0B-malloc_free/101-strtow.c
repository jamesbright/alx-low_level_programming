#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * Description: each elememt of the array will contain a single word
 * the last element of the array will be null
 * @str: string to split
 * Return: a pointer to an array of words or NULL
 */

char **strtow(char *str)
{
int i, j = 0, k = 0, str_len = strlen(str);
char **str_words = NULL;
str_words = malloc(str_len * sizeof(char))
if (str_words == NULL)
return (NULL);

for (i = 0; i <= str_len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
str_words[k][j] = '\0';
k++;
j = 0;
}
else
{
str_words[k][j] = str[i];
j++;
}
}
return (str_words);
}
