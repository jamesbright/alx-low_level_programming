#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * word_count - function counts number of words
 * Description: counts and returns number of words contained in a string
 * @str: string being passed to check for words
 * Return: number of words
 */
int word_count(char *str)
{
int a, num = 0;

for (a = 0; str[a] != '\0'; a++)
{
if (*str == ' ')
str++;
else
{
for (; str[a] != ' ' && str[a] != '\0'; a++)
str++;
num++;
}
}
return (num);
}

/**
 * free_memory - frees the memory
 * Description: frees memory of passed pointer value
 * @string: pointer values passed for freeing
 * @i: count
 */
void free_memory(char **string, int i)
{
for (; i > 0;)
free(string[--i]);
free(string);
}

/**
 * strtow - splits a string into words
 * Description: each elememt of the array will contain a single word
 * the last element of the array will be null
 * @str: string to split
 * Return: a pointer to an array of words or NULL
 */

char **strtow(char *str)
{
int i, j = 0, k = 0, str_len = word_count(str);
char **str_words = NULL;

if (str == 0 || str == NULL)
return (NULL);

str_words = malloc(str_len + 1 * sizeof(char *));
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
