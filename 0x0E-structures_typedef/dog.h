#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name: dog name
 * @owner: owner's name
 * @age: dog age
 */

typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;

#endif
