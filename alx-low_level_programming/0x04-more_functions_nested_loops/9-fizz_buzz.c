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
if (i % 15 == 0)
printf("FizzBuzz");

else if ((i % 3) == 0)
printf("Fizz");

else if (i % 5 == 0)
printf("Buzz");

else
printf("%d", i);

if (i == 100)
continue;
printf(" ");
}
printf("\n");

return (0);
}
