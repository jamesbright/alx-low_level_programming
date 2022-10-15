#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program prints string and returns 0
(* a blank line
 * Description: prints if the last digit is greater tha 5, less than 6 or 0)?
 * a text is printed after the code is executed
 * no variable is used here.
 * Return: returns 0 at end of execution
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

last_digit = n % 10;
if (last_digit > 5)
{
printf("Last digit of %d is, %d and is greater than 5");
}
else if (last_digit  == 0)
{
printf("Last digit of %d is, %d and is 0");
}
else if (last_digit < 6 && last_digit !== 0)
{
printf("Last digit of %d is, %d and is less than 6 and not 0");
}

return(0);
}
