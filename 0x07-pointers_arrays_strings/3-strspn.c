#include "main.h"

/**
 * _strspn - length returner.
 * @s: pointer to string.
 * @accept: bytes to be accepted.
 * Description: a function that gets the length
 * of a prefix substring.
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	const char *p, *q;

	for (p = s; *p; p++)
	{
		for (q = accept; *q; q++)
			if (*p == *q)
				goto proceed;
		break;

		proceed:;
	}
	return (p - s);
}
