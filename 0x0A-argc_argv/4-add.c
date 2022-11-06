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
char *s;
if (argc < 1)
{
return (0);
}
else
{
for (i = 1; i < argc; i++)
{
s = argv[i];
if ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
{
printf("%s\n", "Error");
return (1);
}
result += atoi(argv[i]);
}
printf("%d\n", result);
}
return (0);
}
