#include "dog.h"
#include <stdlib.h>




/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to the dog_t structure to be freed
 *
 * Description: Safely releases all memory associated with a dog_t structure,
 * including the dynamically allocated name and owner fields. If @d is NULL,
 * the function does nothing.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
