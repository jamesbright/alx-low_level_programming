#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of main function
 * @argc: the size of the argument vector
 * @argv: the argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
char *mem_loc = (char *) main;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

i = atoi(argv[1]);

if (i < 0)
{
printf("Error\n");
exit(2);
}

while (i--)
printf("%02x%c", *mem_loc++ & 0xff, i ? ' ' : '\n');

return (0);
}
