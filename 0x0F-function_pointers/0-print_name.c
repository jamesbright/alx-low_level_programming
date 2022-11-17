#include "function_pointers.h"

/**
 * print_name - Print a name from pointer function
 * @name: char string 
 * @f: pointer function that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
f(name);
}
