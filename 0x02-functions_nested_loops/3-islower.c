#include <stdio.h>
#include <ctype.h>
#include "_putchar.c"
/*
 * function: _islower
 *
 * Description - returns 1 if c is lower
 * otherwise returns 0;
 *
 * Return : Always 0.
 */
int _islower(int c)
{
	if (islower(c) > 0) return 1;
	else return 0;
}