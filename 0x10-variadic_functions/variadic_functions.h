#ifndef _VARIADIC_FUNCTION_H
#define _VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);void print_all(const char * const format, ...);

/**
 * struct fkey - a key for picking functions to use
 *
 * @f: function to use for printing
 * @spec: character specifier
 */
typedef struct fkey
{
void (*f)(va_list);
char spec;
} fkey;


#endif /* END _VARIADIC_FUNCTION_H */
