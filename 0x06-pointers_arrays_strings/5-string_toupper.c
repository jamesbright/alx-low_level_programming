#include "main.h"
#include <string.h>
/**
 * string_toupper - converts lowercase to uppercase
 * Description: converts lowercase string to uppercase
 * @str: string
 * Return pointer
 */

char *string_toupper(char *str)
{
int i, len = strlen(str);

for(i = 0; i < len; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 'a' + 'A';

}

return (str);
}
