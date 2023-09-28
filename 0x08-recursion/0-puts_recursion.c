#include "main.h"

/**
 * _puts_recursion - string printer
 * @s: pointer to string.
 * Description: a function that prints a string.
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
