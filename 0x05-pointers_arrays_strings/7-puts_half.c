#include "main.h"

/**
 * puts_half - printer function.
 * @str: string pointer.
 *
 * Description:  a function that prints
 * half of a string.
 *
 * Return: None.
 */

void puts_half(char *str)
{
	int counter;
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
			break;
		++length;
	}

	if (length % 2 == 0)
		length++;

	for (counter = (length / 2) + 1; counter <= length; ++counter)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
