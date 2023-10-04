#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: pointer to arguments.
 * Return: NULL if ac == 0 or av == NULL, a pointer to a new string,
 * or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *save;
	int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (; counter1 < ac; counter2++)
	{
		for (; av[counter2][counter3] != 0; counter3++)
			counter1++;
		counter1++;
	}
	counter1++;
	save = malloc(counter1 * sizeof(char));
	if (save == 0)
		return (NULL);

	for(counter2 = 0; counter2 < ac; counter2++)
	{
		for (counter3 = 0; av[counter2][counter3] != 0; counter3++)
			save[counter4++] = av[counter2][counter3];
		save[counter4] = 10;
	}
	save[counter4] = 0;
	return (save);
}
