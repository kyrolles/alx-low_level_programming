#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a dog struct.
 * @name:dog's name.
 * @age: dog's age.
 * @owner: owner's name.
 * @d: the variable.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
