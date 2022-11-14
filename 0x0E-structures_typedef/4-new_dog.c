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
free(ptr);
free(owner);
return (NULL);
}
else if (owner == NULL)
{
free(name);
free(ptr);
return (NULL);
}

ptr->name = name;
ptr->age = age;
ptr->owner = owner;
return (ptr);
}
