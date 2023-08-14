#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes the members of struct dog with the
 * provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = malloc(sizeof(char) * (strlen(name) + 1));
if (d->name)
strcpy(d->name, name);

d->age = age;

d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (d->owner)
strcpy(d->owner, owner);
}
}
