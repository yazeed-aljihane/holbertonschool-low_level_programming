#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Pointer to the dog's name
 * @age: Dog's age in years
 * @owner: Pointer to the owner's name
 *
 * Description: Assigns the provided values to the corresponding
 * fields of the given dog structure.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
