#include "main.h"

/**
 * _islower - check if the letter
 * is lower case or not
 * @c: letter
 *
 * Description: returns 1 if c is lower
 * otherwise returns 0;
 *
 * Return: 1 if lower and 0 if not.
 */
int _islower(int c)
{
	if (islower(c) > 0)
	return (1);
	else
	return (0);
}
