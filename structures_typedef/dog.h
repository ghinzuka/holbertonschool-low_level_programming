#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - structure with 3 information in it
 * @name: name
 * @age: age of the dog
 * @owner: dog's owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
