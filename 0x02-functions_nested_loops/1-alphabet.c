#include <stdio.h>
#include "main.h"
/**
 * print_alphabet
 *
 * Description - prints the alphabet
 *
 * Return : None.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
	_putchar(letter);
	}
	_putchar('\n');
}
