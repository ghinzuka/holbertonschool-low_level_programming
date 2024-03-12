#include "dog.h"
/**
 * init_dog - initialize dog
 * @d: pointer to the dog in the header
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
