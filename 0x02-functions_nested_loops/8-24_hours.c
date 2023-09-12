#include <stdio.h>
#include "_putchar.c"
/*
 * Function : jack_bauer
 *
 * Description : prints every minute of
 * the day of Jack Bauer, starting
 * from 00:00 to 23:59.
 *
 * Return : None
 */
void jack_bauer(void)
{
	int counter1, counter2, counter3, counter4, maxlimit2;

	for (counter1 = 0; counter1 <=2; ++counter1)
	{
	if (counter1 == 2) maxlimit = 3;
	else maxlimit2 = 9;
	for (counter2 = 0; counter2 <= maxlimit2; ++counter2)
	{
	for counter3 = 0; counter3 <=5; ++counter3)
	{
	for (counter4 = 0; counter4 <=9; ++counter4)
	{
	_putchar(counter1);
	_putchar(counter2);
	_putchar(':');
	_putchar(counter3);
	_putchar(counter4);
	}
	}
	}
	}
}
