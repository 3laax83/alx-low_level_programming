#include "dog.h"

/**
 * new_dog - function for a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = strlen(name), j = strlen(owner), k;
	struct dog *canine;

	if (!name || !age || !owner)
		return (NULL);

	canine = malloc(sizeof(struct dog));
	if (canine == NULL)
		return (NULL);

	canine->name = malloc(i * sizeof(char));
	if (canine->name == NULL)
	{
		free(canine);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		canine->name[k] = name[k];

	canine->age = age;

	canine->owner = malloc(j * sizeof(char));
	if (canine->owner == NULL)
	{
		free(canine->owner);
		free(canine);
		return (NULL);
	}
	for(k = 0; k < j; k++)
		canine->owner[k] = owner[k];

	return (canine);
}
