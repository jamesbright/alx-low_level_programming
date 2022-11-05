#include <stdio.h>

/**
 * main - prints it's name
 * Desription: program prints it's name followed by a new line
 * @argc:  argument count
 * @argv: arguments passed in
 * Return: 0
 */

int main(int argc, char *argv[])
{
if (argc >= 0)
printf("%s\n", argv[0]);
return (0);
}
