#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - displays elements of struct dog
 * @d: instance of struct dog
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->age == NULL || d->owner == NULL)
printf("%s", "nil");
else if (d->name == NULL)
printf("%s", "Name: (nil)");
}
}
