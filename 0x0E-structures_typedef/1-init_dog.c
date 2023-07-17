#include <stdlib.h>
#include "dog.h"

/**
  *init_dog-initializes variables of the
  *structure
  *struct dog -includes variables of the structure
  *@d: pointer
  *@name: string
  *@age: float
  *@owner: string
  *Return :void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
