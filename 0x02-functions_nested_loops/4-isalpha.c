#include <stdio.h>
#include "_putchar.c"
/*
 * Function : _isalpha
 *
 * Description : checks for
 * alphabetic character
 *
 * Return : 1 if c is letter, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z' || c >= 'A' && c <= 'Z') return 1;
	else return 0;
}
