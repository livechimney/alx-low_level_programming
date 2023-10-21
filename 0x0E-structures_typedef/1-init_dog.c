#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - new dog struct with variable it to initialize
 *
 * @d: The dog to be initialized
 * @name: The name of dog
 * @age:The age of dog
 * @owner: The owner of the dog
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
