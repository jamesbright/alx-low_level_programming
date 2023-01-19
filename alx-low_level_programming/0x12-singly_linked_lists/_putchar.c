#include "lists.h"

/**
 * _puchar - writes character to stdout
 * @c: character to write
 * Return: on success 1, on error -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
