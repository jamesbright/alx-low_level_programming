#include <stdio.h>
#include <string.h>
/**
 * main - program prints string
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * a text is printed after the code is executed
 * no variable is used here.
 * Return: returns 1 at end of execution
 */
int main(void)
{
static const char qoute[] = "and that piece of art is useful\""
"- Dora Korpar, 2015-10-19";
fwrite(qoute, sizeof(qoute) - 1, 1, stdout);
return (1);
}
