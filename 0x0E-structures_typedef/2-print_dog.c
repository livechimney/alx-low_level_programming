#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: The struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
		
	{
	if (!(d->name))
		printf("Name: (nil)\n");
	else
		printf("Age: %s\n", d->name);
	printf("Age: %f\n", d->age);

	if (!(d->owner))
		printf("Owner: (nil)\n");
	else
	printf("Owner: %s\n", d->owner);
	}
	
}

