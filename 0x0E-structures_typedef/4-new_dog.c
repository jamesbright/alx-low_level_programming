#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function to create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;
ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
return (NULL);

if (name == NULL)
{
free(age);
free(owner);
return (NULL);
}
else if (age == NULL)
{
free(name);
free(owner);
return (NULL);
}
else if (owner == NULL)
{
free(name);
free(age);
return (NULL);
}

p->name = name;
p->age = age;
p->owner = owner;
return (p);
}
