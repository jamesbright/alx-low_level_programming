#include <stdio.h>

/**
 * main - prints all arguments given to it
 * Desription: program prints all arguments followed by a new line
 * @argc:  argument count
 * @argv: arguments passed in
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
if (argc > 0)
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
