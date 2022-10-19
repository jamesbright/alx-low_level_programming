#include <stdlib.h>
#include <ctype.h>

/** 
 * _islower - checks if a character is lower case
 * Description: This function checks if a character is lower case and 
 * returns a value accordingly
 * @c: character to be checked
 * Return:  return 1 if c is lowercase otherwise return 0
 */

int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
