#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabets y
 * Description: function prints the alphabet
 * Return: always return 0 after execution
 */
void print_alphabet(void)
{
unsigned int i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < strlen(alphabet); ++i)
{
putchar(alphabet[i]);
}
putchar('\n');
}
