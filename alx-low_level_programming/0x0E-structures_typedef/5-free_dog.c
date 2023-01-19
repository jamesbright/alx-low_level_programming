#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function fres dog
 * @d: pointer of type dog_t
 */
void free_dog(dog_t *d)
{
if (d != NULL)
free(d);
}
