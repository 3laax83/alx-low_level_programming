#include "main.h"

/**
 * _puts_recursion - string printer
 * Description: a function that prints a string.
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(*s++);
}
