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
	int counter, counter2;
	char temp;
	int length = 0;

	while (length >= 0)
	{
		if (*(s + length) == '\0')
			break;
		length++;
	}


	for (counter = 0; counter < length - 1; ++counter)
	{
		for (counter2 = counter + 1; counter2 > 0; --counter2)
		{
			temp = *(s + counter2);
			*(s + counter2) = *(s + abs(counter2 - 1));
			*(s + abs(counter2 - 1)) = temp;
		}
	}
}
