#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - program prints string and returns 0
(* a blank line
 * Description: prints hexadecimal numbers)?
 * a text is printed after the code is executed
 * Return: returns 0 at end of execution
 */
int main(void)
{
int i;
char hex[] = "0123456789abcdef";
int hex_len = strlen(hex);
for (i = 0; i < hex_len; ++i)
{
putchar(hex[i]);
}
putchar('\n');
return (0);
}

