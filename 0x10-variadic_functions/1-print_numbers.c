#include "variadic_functions.h"


/**
 * print_numbers - prints numbers
 * @seperator: seperator between numbers
 * @n: number of arguments
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
va_list list;
char *separator_copy;

if (separator == NULL || *separator == 0)
separator_copy = "";
else
separator_copy = separator;

va_start(list, n);

if (n > 0)
printf("%d", va_arg(list, n));

for (i = 1; i < n; i++)
printf("%s%d", separator_copy, va_arg(list, n));
printf("\n");
va_end(list);
}
