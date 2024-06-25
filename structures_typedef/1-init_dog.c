#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - create a variable of dog.
 *
 * @d: passing structure at function.
 * @name: store a string for name.
 * @age: stores a float for age.
 * @owner: store a string for owner.
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
