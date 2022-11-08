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
int i = 0, j = 0, k = 0, str_len = 0;
char **str_words, *found;

if (str == 0 || *str == 0)
return (NULL);

i = word_count(str);

if (i == 0)
return (NULL);

str_words = malloc((i + 1) * sizeof(char *));
if (str_words == 0)
return (NULL);

for (; *str != '\0' && j < i;)
{
if (*str == ' ')
str++;

else
{
found = str;
for (; *str != ' ' && *str != '\0';)
{
str_len++;
str++;
}
str_words[j] = malloc((str_len + 1) * sizeof(char));
if (str_words[j] == 0)
{
free_memory(str_words, j);
return (NULL);
}
while (*found != ' '  && *found != '\0')
{
str_words[j][k] = *found;
found++;
k++;
}
str_words[j][k] = '\0';
j++;
k = 0;
str_len = 0;
str++;
}
}
return (str_words);
}
