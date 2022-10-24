#include "main.h"

/**
 * rev_string - function to reverse a string
 * Description: function to reverse a string in c
 * @s: variable
 */

void rev_string(char *s)
{
int i = 0, j = 0;
char str[500];

while (*(s + i))
{
*(str + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(str + j);
j++;
i--;
}
}
