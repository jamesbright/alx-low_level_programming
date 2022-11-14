#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function to create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer
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
if (owner == NULL)
{
free(ptr);
free(name);
return (NULL);
}

ptr->name = name;
ptr->owner = owner;
return (ptr);
}
