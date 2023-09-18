#include "main.h"

/**
 * print_rev - printer function.
 * @s: pointer to char.
 *
 * Description: a function that
 * prints a string, in reverse.
 *
 * Return: None.
 */

void print_rev(char *s)
{
	int counter;

	for (counter = strlen(s); counter >= 0; --counter)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
