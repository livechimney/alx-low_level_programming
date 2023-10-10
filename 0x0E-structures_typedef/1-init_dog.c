#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - new dog struct with variable it to initialize
 *intialized
 * @d: pointer to the struct of the new dog
 * @name: of dog
 * @age:of dog
 * @owner: of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;

}
