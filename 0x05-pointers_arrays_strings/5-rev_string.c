#include "main.h"

/**
 * rev_string - function to reverse a string
 * Description: function to reverse a string in c
 * @s: variable
 */

void rev_string(char *s)
{
int i = 0, j = 0;
char str1[500];

while (*(s + i))
{
*(str1 + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(str1 + j);
j++;
i--;
}
}
