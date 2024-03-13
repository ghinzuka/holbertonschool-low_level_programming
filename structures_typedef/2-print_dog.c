#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog
 * @d: structure to print
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

printf("Name: ");
if (d->name == NULL)
{
	printf("(nil)\n");
}
else
{
	printf("%s\n", d->name);
}

printf("Age: ");
if (d->age < 0)
{
	printf("(nil)\n");
}
else
{
	printf("%f\n", d->age);
}

printf("Owner: ");
if (d->owner == NULL)
{
	printf("(nil)\n");
}
else
{
	printf("%s\n", d->owner);
}
}
