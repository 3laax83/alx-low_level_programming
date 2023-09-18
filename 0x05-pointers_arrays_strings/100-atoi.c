#include "main.h"

/**
 * _atoi - converter function
 * @s: char pointer.
 *
 * Description: a function that convert a string to an integer.
 *
 * Return: The converted Integer.
 */

int _atoi(char *s)
{
	unsigned int counter = 0, size = 0;
	unsigned int  output = 0, sign = 1;
	unsigned int multiplier = 1, counter2;

	while (*(s + counter) != '\0')
	{
		if (size > 0 && (*(s + counter) < 48 || *(s + counter) > 57))
			break;
		if (*(s + counter) == '-')
			sign = -1;
		if (*(s + counter) >= 48 && *(s + counter) <= 57)
		{
			if (size > 0)
				multiplier *= 10;
			size++;
		}
		counter++;
	}
	for (counter2 = counter - size; counter2 < counter; ++counter2)
	{
		output += (*(s + counter2) - 48) * multiplier;
		multiplier /= 10;
	}
	return (output * sign);
}
