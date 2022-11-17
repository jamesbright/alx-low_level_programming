#include <stdarg.h>

/**
 * sum_them_all - sums all passed arguments
 * @n: number of arguments
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
sum += va_arg(list, int);

va_end(list);
return (sum);
}
