#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's attributes.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure defines the attributes of a dog,
 * including its name, age, and owner.
 */
struct dog
{
    char name[100];
    float age;
    char owner[100];
};

/* Prototype for the init_dog function */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
