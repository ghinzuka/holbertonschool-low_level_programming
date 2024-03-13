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

unsigned int len1 = 0, len2 = 0, i = 0;

while (name[len1])
	len1++;
while (owner[len2])
	len2++;

firstdog = malloc(sizeof(dog_t));
if (firstdog == NULL)
	return (NULL);

firstdog->age = age;

firstdog->name = malloc((len1 + 1) * sizeof(char));
if (firstdog->name == NULL)
return (NULL);

for (i = 0; i < len1; i++)
	firstdog->name[i] = name[i];
firstdog->name[len1] = '\0';

firstdog->owner = malloc((len2 + 1) * sizeof(char));
if (firstdog->owner == NULL)
return (NULL);

for (i = 0; i < len2; i++)
	firstdog->owner[i] = owner[i];
firstdog->owner[len2] = '\0';

return (firstdog);
}
