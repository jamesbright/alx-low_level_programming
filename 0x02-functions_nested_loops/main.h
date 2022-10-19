#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabets y
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
#endif
