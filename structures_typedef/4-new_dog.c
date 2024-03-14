#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: new dog's name
 * @age: new dog age
 * @owner: new dog's owner
 * Return: the newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *firstdog;
int i = 0, j = 0, k = 0;

while (name[i])
	i++;
while (owner[j])
	j++;

firstdog = malloc(sizeof(dog_t));
if (firstdog == NULL)
{
	free(firstdog);
	return (NULL);
}

firstdog->owner = malloc(j * sizeof(firstdog->owner));
firstdog->age = age;
firstdog->name = malloc(i * sizeof(firstdog->name));


if (firstdog->name == NULL || firstdog->owner == NULL)
{
	free(firstdog->owner);
	free(firstdog->name);
	free(firstdog);
	return (NULL);
}

for (k = 0; k <= i; k++)
	firstdog->name[k] = name[k];

for (k = 0; k <= j; k++)
	firstdog->owner[k] = owner[k];

return (firstdog);
}
