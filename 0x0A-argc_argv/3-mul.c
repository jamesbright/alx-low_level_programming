#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints result of multiplying two arguments given to it
 * Desription: program prints multiplication results of two arguments
 * followed by a new line
 * @argc:  argument count
 * @argv: arguments passed in
 * Return: 0
 */

int main(int argc, char *argv[])
{

if (argc < 3)
{
printf("%s\n", "Error");
return (1);
}
else
{
int a = atoi(argv[1]), b = atoi(argv[2]);
int result = a * b;
printf("%d\n", result);
}
return (0);
}

