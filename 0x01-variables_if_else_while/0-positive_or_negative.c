#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program prints string and returns 0
(* a blank line
 * Description: prints if the number is positive
 * , negative or zero)?
 * a text is printed after the code is executed
 * no variable is used here.
 * Return: returns 0 at end of execution
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive", n);
}
else if (n < 0)
{
printf("%d is negative", n)
}
else
{
printf("%d is zero", n)
}
return (0);
}
