#include "main.h"

/**
 * _strlen_recursion - length counter.
 * @s: pointer to string
 * Description: a function that returns the length of a string.
 * Return: length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
