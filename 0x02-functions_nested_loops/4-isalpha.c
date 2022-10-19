#include <stdlib.h>
#include <ctype.h>

/**
 * _isalpha - checks if a character is alphabet
 * Description: This function checks if a character is an alphabet and
 * returns a value accordingly
 * @c: character to be checked
 * Return:  return 1 if c is alphabet otherwise return 0
 */

int _isalpha(int c)
{
if (islower(c))
return (1);
else
return (0);
}

