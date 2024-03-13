#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog
 * @d: structure to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	else if (d->name == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age <= 0)
	{
		printf("nil");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
