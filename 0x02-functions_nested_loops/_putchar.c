#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
//return (write(1, &c, 1));
/* print '-' for negative numbers */
    if (c < 0) {
        return putchar('-');
        c = c * -1;
    }
  
    /* Print Zero */
    if (c == 0)
       return putchar('0');
  
    /* First remove the last digit of number and print 
    the remaining digits using recursion, then print
    the last digit
 */
    if (c/10)
        _putchar(c/10);
  
   return putchar(c%10 + '0');
}
