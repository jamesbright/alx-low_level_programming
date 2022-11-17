#include "variadic_functions.h"

/**
 * print_char - printfs a char
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void print_char(va_list list)
{
printf("%c", (char) va_arg(list, int));
}

/**
 * print_int - printfs an int
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void print_int(va_list list)
{
printf("%d", va_arg(list, int));
}

/**
 * print_float - printfs a float
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void print_float(va_list list)
{
printf("%f", (float) va_arg(list, double));
}

/**
 * printf_string - printfs a string
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void print_string(va_list list)
{
char *str = va_arg(list, char*);

while (str != NULL)
{
printf("%s", str);
return;
}
printf("(nil)");
}


/**
 * print_all - prints various types given a format
 * string for the arguments
 * @format: string containing type information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
const char *ptr;
va_list list;
fkey key[4] = { {print_char, 'c'}, {print_int, 'i'},
{print_float, 'f'}, {print_string, 's'} };
int key_index = 0, first_flag = 0;

ptr = format;
va_start(list, format);
while (format != NULL && *ptr)
{
if (key[key_index].spec == *ptr)
{
if (first_flag)
printf(", ");
first_flag = 1;
key[key_index].f(list);
ptr++;
key_index = -1;
}
key_index++;
ptr += key_index / 4;
key_index %= 4;
}
printf("\n");
}
