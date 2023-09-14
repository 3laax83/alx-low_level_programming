#include "main.h"
/**
 * _isupper - checker for upper
 * @c: character
 *
 * Description: a function that checks
 * for uppercase character.
 *
 * Return: 1 if c is uppercase, 0 if not
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
