#include <stdio.h>

/**
 * main - prints number of arguments given to it
 * Desription: program prints it's number of arguments followed by a new line
 * @argc:  argument count
 * @argv: arguments passed in
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
int i;
for (i = 0; i < argc - 1; i++)
{
}
printf("%d\n", i);
return (0);
}

