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
static const char qoute[] = "and that piece of art is useful\"";
static const char qoute_ctd[] = " - Dora Korpar, 2015-10-19\n";
fwrite(qoute, sizeof(qoute) - 1, 1, stdout);
fwrite(qoute_ctd, sizeof(qoute_ctd) - 1, 1, stdout);
return (1);
}
