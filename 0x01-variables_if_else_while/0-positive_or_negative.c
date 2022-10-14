#include <stdlib.h>
#include <time.h>
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
printf("%d %s", n, " is positive");
}
else if (n < 0)
{
printf("%d %s", n, " is negative")
}
else
{
printf("%d %s", n, " is zero")
}
return (0);
}
