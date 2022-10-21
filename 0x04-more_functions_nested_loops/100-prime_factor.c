#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * main - print the largest prime factor of a number
 * Description: this function finds and print the
 * largest prime factor ofva number
 * Return: 0
 */


int main(void)
{
int i, largest = 0;
long int n = 612852475143;

while (n % 2 == 0)
{
largest = 2;
n = n % 2;
}

for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
if (largest < i)
largest = i;
n = n / i;
}
}
if (n > 2)
{
if (largest < n)
largest = n;
}
printf("%d\n", largest);
return (0);
}
