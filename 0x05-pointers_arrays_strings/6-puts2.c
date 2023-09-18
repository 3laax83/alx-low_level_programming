#include "main.h"

/**
 * puts2 - printer function.
 * @str: string pointer.
 *
 * Description:  a function that prints
 * every other character of a string,
 * starting with the first character.
 *
 * Return: None.
 */

void puts2(char *str)
{
	int counter;
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
			break;
		++length;
	}

	for (counter = 0; counter < length; counter += 2)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
