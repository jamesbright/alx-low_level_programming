#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*** 
 * print_alphabet_x10 - prints the alphabets 10 times
 * Description: function prints the alphabet 10 times
 *  Return: always return 0 after execution
 */

void print_alphabet_x10(void)
{
unsigned int i, counter = 10;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
while (counter > 0)
{
for (i = 0; i < strlen(alphabet); ++i)
{
putchar(alphabet[i]);
}
counter--;
putchar('\n');
}
}
