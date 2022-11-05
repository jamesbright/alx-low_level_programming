#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints result of adding two arguments given to it
 * Desription: program prints addition results of two arguments
 * followed by a new line
 * @argc:  argument count
 * @argv: arguments passed in
 * Return: 0
 */

int main(int argc, char *argv[])
{

if (argc < 2)
{
printf("%d\n", 0);
}
else if (!(atoi(argv[1])) || !(atoi(argv[2])))
{
printf("%s\n", "Error");
}
else
{
int a = atoi(argv[1]), b = atoi(argv[2]);
int result = a + b;
printf("%d\n", result);
}
return (0);
}
