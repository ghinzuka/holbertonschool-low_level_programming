#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: new dog's name
 * @age: new dog age
 * @owner: new dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *firstdog;
unsigned int len1, len2, i = 0;

if(

for (i = 0; name[i]; i++)
	len1++;
for (i = 0; owner[i]; i++)
	len2++;
firstdog = malloc(sizeof(dog_t));
if (firstdog == NULL)
{
	return (NULL);
}

}
