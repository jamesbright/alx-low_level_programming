#include <string.h>
#include <stdio.h>

/**
 * main - finds the multiples of a number
 * Description: finds and prints multiples of numbers
 * Return: 0
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("%-3s ", "Fizz");
}
else if (i % 5 == 0)
{
printf("%-3s", "Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("%-3s", "FizzBuzz");
}
else
{
printf("%-3d", i);
}
}
printf("%s", "\n");
return (0);
}
