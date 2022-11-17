#include "variadic_functions.h"


/**
 * print_strings - prints string
 * @separator: separator between numbers
 * @n: number of arguments
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
char *separator_copy, *str;

if (separator == NULL || *separator == 0)
separator_copy = "";
else
separator_copy = (char *)separator;

va_start(list, n);


if (n > 0)
printf("%s", va_arg(list, char *));

for (i = 1; i < n; i++)
{
str = va_arg(list, char*);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator_copy, str);
}
printf("\n");
va_end(list);
}

