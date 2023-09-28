#include "main.h"

/**
 * _strlen_recursion - length counter.
 * @s: pointer to string
 * Description: a function that returns the length of a string.
 * Return: length of a string.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
	}
	i++;
	return (i);
}
