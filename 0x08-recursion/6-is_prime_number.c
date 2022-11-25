#include "main.h"


/**
 * check_prime - checks for prime number
 * @n: input to check
 * @i: iterator
 * Return: if prime
 */
int check_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0)
return (0);
else
return (check_prime(n, i - 1));
}


/**
 * is_prime_number - returns prime number
 * @n: number to check
 * Return 1 if n is prime
 */


int is_prime_number(int n)
{
if (n <= 1)
return (0);
else if (check_prime(n, n / 2) > 0)
return (1);
return (0);
}
