#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialize dog struct
 * @d: type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
