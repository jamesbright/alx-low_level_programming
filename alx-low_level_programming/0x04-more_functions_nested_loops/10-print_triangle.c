#include "main.h"

/**
 * print_triangle - prints triangle
 * Description: function prints triangle in a certain order
 * @size: size of triangle to print
 */
void print_triangle(int size)
{
int i, j;
if (size < 1)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j < size - i - 1)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}

}
