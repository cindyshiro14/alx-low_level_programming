#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the attributes of a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the attributes of a struct dog.
 * If an element of d is NULL, it prints (nil) instead of the element's value.
 * If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}
