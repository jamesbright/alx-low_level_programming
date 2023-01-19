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
if (d->name == NULL)
printf("Name: %p\n", (void *)d->name);
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: %p\n", (void *)d->owner);
else
printf("Owner: %s\n", d->owner);
}
}
