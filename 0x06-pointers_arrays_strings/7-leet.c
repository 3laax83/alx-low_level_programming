#include "main.h"

/**
 * leet - a function that encodes
 * a string into 1337.
 * @str: pointer to string.
 *
 * Description:Letters a and A should be
 * replaced by 4. Letters e and E should be
 * replaced by 3. Letters o and O should be
 * replaced by 0. Letters t and T should be
 * replaced by 7. Letters l and L should be
 * replaced by 1
 *
 * Return: pointer to lett-ed string.
 */

char *leet(char *str)
{
	char *save = str;
	char letter[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {4, 3, 0, 7, 1};
	int counter;

	while (*str++)
	{
		counter = 0;
		while (counter < 5)
		{
			if (*str == letter[counter] || *str == letter[counter] + 32)
				*str = num[counter] + '0';
			counter++;
		}
	}
	return (save);
}
