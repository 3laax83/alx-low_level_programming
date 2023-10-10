#include "dog.h"

/**
 * print_dog - print dog info
 * @d: pointer to dog.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: ");
	if (d->name)
		printf("%s", d->name);
	else
		printf("(nil)");

	printf("\nAge: ");
	if (d->age)
		printf("%f", d->age);
	else
		printf("(nil)");

	
	printf("\nOwner: ");
	if (d->owner)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n");

	}
}
