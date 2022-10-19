#ifndef MAIN_H
#define MAIN_H

/**
 * print_alphabet_x10 - prints a string
 * Description: function to display string
 * Return: always return 0 after execution
 */
void print_putchar(void)
{
printf("%s", "_putchar\n");
}


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

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 * Description: function prints the alphabet 10 times
 * Return: always return 0 after execution
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
#endif
