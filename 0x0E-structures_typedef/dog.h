#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog with name, age, and owner information.
 * @name: The name of the dog (string).
 * @age: The age of the dog (float).
 * @owner: The owner of the dog (string).
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Define dog_t as an alias for struct dog */
typedef struct dog dog_t;

#endif /* DOG_H */
