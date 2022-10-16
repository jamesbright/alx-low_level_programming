#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - program prints string and returns 0
(* a blank line
 * Description: prints letters of the alphabet)?
 * a text is printed after the code is executed
 * Return: returns 0 at end of execution
 */
int main(void)
{
int i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < strlen(alphabet); ++i)
{
putchar(alphabet[i]);
putchar('\n');
}
return (0);
}
