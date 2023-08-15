#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new instance of a dog.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 *
 * Return: Pointer to the newly created dog_t instance, or NULL if memory
 * allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;

/* Allocate memory for the new dog_t instance */
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

/* Copy the name and owner strings */
new_dog_ptr->name = strdup(name);
if (new_dog_ptr->name == NULL)
{
free(new_dog_ptr);
return (NULL);
}

new_dog_ptr->owner = strdup(owner);
if (new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr);
return (NULL);
}

/* Set the age */
new_dog_ptr->age = age;

return (new_dog_ptr);
}
