#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




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
char *name_cp;
char *owner_cp;
int i,j,z;


for(j = 0; name[j] != '\0';j++)
;

for(z = 0; owner[z] != '\0';z++)
;
name_cp = malloc(j + 1);
if (name_cp == NULL)
return (NULL);
for (i = 0; name[i] != '\0'; i++)
{
name_cp[i] = name[i];
}
name_cp[i] = '\0';

owner_cp = malloc(z + 1);
if (owner_cp == NULL)
return (NULL);
for (i = 0; owner[i] != '\0'; i++)
{
owner_cp[i] = owner[i];
}
owner_cp[i] = '\0';

newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
{
free(newdog);
return (NULL);
}
newdog->name = name_cp;
newdog->age = age;
newdog->owner = owner_cp;

return (newdog);
}
