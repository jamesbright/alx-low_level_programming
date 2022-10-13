#include <stdio.h>
#include <string.h>
/**
 * main - program prints size of types
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * a text is printed after the code is executed
 * no variable is used here.
 * Return: returns 0 at end of execution
 */
int main(void)
{
char    a    = 'A';
int     b    = 187;
long    c    = 1338668;
long long  d = 17678228754;
float    e   = 678.53f;

printf("Size of a char: %d %s", sizeof(a), "byte(s)");
printf("\nSize of an int: %d %s", sizeof(b), "byte(s)");
printf("\nSize of a long int: %d %s", sizeof(c), "byte(s)");
printf("\nSize of a long long int: %d %s", sizeof(d), "byte(s)");
printf("\nSize of a float: %d %s", sizeof(e), "byte(s)\n");

return (0);
}
