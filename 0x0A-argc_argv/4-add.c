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
int i, result = 0;
if (argc < 1)
{
printf("%d\n", 0);
}
for (i = 0; i < argc; i++)
{
if (!(atoi(argv[i])))
{
printf("%s\n", "Error");
return (1);
}
result += argv[i];
}
printf("%d\n", result);
return (0);
}
