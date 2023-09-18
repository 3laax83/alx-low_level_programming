#include "main.h"

/**
 * rev_string - reverser function.
 * @s: pointer to char.
 *
 * Description: a function that
 * that reverses a string.
 *
 * Return: None.
 */

void rev_string(char *s)
{
	int length = sizeof(s) - 1;
	int counter, counter2;
	char temp;

	for (counter = 0; counter <= length; ++counter)
	{
		for (counter2 = counter + 1; counter2 > 0; --counter2)
		{
			temp = *(s + counter2);
			*(s + counter2) = *(s + (counter2 - 1));
			*(s + (counter2 - 1)) = temp;
		}
	}
}
