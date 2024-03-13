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
unsigned int len1, len2, i = 0;

if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

for (i = 0; name[i]; i++)
	len1++;
for (i = 0; owner[i]; i++)
	len2++;

firstdog = malloc(sizeof(dog_t));
if (firstdog == NULL)
	return (NULL);

firstdog->age = age;

firstdog->name = malloc((len1 + 1) * sizeof(firstdog->name));
if (firstdog->name == NULL)
return (NULL);
for (i = 0; i < len1; i++)
firstdog->name[i] = name[i];

firstdog->owner = malloc((len2 + 1) * sizeof(firstdog->owner));
if (firstdog->owner == NULL)
return (NULL);
for (i = 0; i < len2; i++)
firstdog->owner[i] = owner[i];

return (firstdog);
}
