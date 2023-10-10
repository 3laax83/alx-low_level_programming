#include "dog.h"

/**
 * new_dog - function for a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *canine;

	if (!name || !age || !owner)
		return (NULL);

	while(name[i++])
		;
	while(owner[j++])
		;

	canine = malloc(sizeof(dog_t));
	if (canine = NULL)
		return (NULL);

	canine->name = malloc(sizeof(canine->name) * i);
	if (canine->name == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		canine->name[k] = name[k];

	canine->age = age;

	canine->owner = malloc(sizeof(canine->owner) * j);
	if (canine->owner == NULL)
		return (NULL);
	for(k = 0; k < j; k++)
		canine->owner[k] = owner[k];

	return (canine);
}
