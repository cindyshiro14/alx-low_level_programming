#include "dog.h"
#include <string.h>

/**
 * init_dog - Initialize a struct dog.
 * @d: Pointer to the struct dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
strcpy(d->name, name);
d->age = age;
strcpy(d->owner, owner);
}
}
