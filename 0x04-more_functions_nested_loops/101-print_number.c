#include "main.h"
/**
 * print_number: printer function
 * @n: number
 *
 * Description: prints an integer
 * with _putchar only.
 *
 * Return: None.
 */
void print_number(int n)
{
	char strng[3];
	int counter;

	sprintf(strng, "%d", n);
	if (n < 0)
		_putchar('-');
	for (counter = 0; counter < sizeof(strng)/sizeof(char); ++counter)
	{
		_putchar(strng[counter]);
	}
	_putchar('\n');
}
