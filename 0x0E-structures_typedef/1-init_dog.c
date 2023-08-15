#include <stdio.h>
#include <string.h>

struct dog {
char name[100];
float age;
char owner[100];
};

void init_dog(struct dog *d, char *name, float age, char *owner) {
if (d != NULL) {
strncpy(d->name, name, sizeof(d->name) - 1);
d->name[sizeof(d->name) - 1] = '\0'; // Ensure null-terminated
d->age = age;
strncpy(d->owner, owner, sizeof(d->owner) - 1);
d->owner[sizeof(d->owner) - 1] = '\0'; // Ensure null-terminated
}
}

int main(void) {
struct dog my_dog;

init_dog(&my_dog, "Poppy", 3.5, "Bob");
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return 0;
}
