#include "dog.h"
#include <stdio.h>
#include <stdlib.h>





/**
 * new_dog - Creates a new dog structure
 * @name: Pointer to the dog's name
 * @age: Dog's age in years
 * @owner: Pointer to the owner's name
 *
 * Return: Pointer to the newly created dog_t structure,
 * or NULL if memory allocation fails.
 *
 * Description: Dynamically allocates memory for a new dog_t structure
 * and initializes its members with the given values.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;

newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
return (NULL);

newdog->name = name;
newdog->age = age;
newdog->owner = owner;

return (newdog);
}
