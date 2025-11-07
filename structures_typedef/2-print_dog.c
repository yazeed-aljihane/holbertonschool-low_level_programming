#include "dog.h"
#include <stdlib.h>
#include <stdio.h>




/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to struct dog to print
 *
 * Description: Prints the name, age, and owner of a dog.
 * If @d is NULL, the function does nothing.
 * If @name or @owner is NULL, it prints (nil) instead.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("name: (nil)\n");
else
printf("Name: %s\n", d->name);

printf("Age: %.6f\n", d->age);

if (d->owner == NULL)
printf("owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);

}
