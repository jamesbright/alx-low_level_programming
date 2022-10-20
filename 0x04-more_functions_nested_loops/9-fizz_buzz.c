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
printf("%s ", "Fizz");
}
else if (i % 5 == 0)
{
printf("%s", "Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("%s", "FizzBuzz");
}
else
{
printf("%d", i);
}
if (i == 100)
continue;
printf(" ");
}
printf("%s", "\n");
return (0);
}
