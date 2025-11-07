#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Basic information about a dog
 * @name: Pointer to the dog's name
 * @age: Dog's age in years
 * @owner: Pointer to the owner's name
 *
 * Description: Structure that stores essential details about a dog,
 * including its name, age, and owner's name.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
