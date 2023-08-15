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
void init_dog(struct dog *d, char *name, float age, char *owner) {
if (d != NULL) {
strncpy(d->name, name, sizeof(d->name) - 1);
d->name[sizeof(d->name) - 1] = '\0'; // Ensure null-terminated
d->age = age;
strncpy(d->owner, owner, sizeof(d->owner) - 1);
d->owner[sizeof(d->owner) - 1] = '\0'; // Ensure null-terminated
}
}
