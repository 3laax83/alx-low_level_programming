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
	dog_t *dog;

	while(name[i++])
		;
	while(owner[j++])
		;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	if(!dog->name)
		return(NULL);

	dog->name = malloc(sizeof(dog->name) * i);
	for (k = 0; k < i; k++)
		dog->name[k] = name[k];

	dog->age = age;

	if(!dog->owner)
		return (NULL);
	dog->owner = malloc(sizeof(dog->owner) * j);
	for(k = 0; k < j; k++)
		dog->owner[k] = owner[k];

	return (dog);
}
