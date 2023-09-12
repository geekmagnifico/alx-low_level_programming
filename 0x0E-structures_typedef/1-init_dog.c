#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize
 *    a variable of type struct dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: dog to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		strncpy(d->name, name, sizeof(d->name));
		d->name[sizeof(d->name) - 1] = '\0'; /* Ensure null-terminated string*/

		d->age = age;

		strncpy(d->owner, owner, sizeof(d->owner));
		d->owner[sizeof(d->owner) - 1] = '\0'; /* Ensure null-terminated string*/
	}
}
