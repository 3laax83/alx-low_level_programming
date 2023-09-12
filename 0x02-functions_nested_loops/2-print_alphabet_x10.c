#include <stdio.h>
#include "main.h"
/*
 * print_alphabet_x10 - print alphabet
 * 10 times.
 *
 * Description: prints the alphabet 10x
 *
 * Return : Always 0.
 */
void print_alphabet_x10(void)
{
	char letter;
	int counter;

	for (counter = 0; counter < 10; ++counter)
	{
	for (letter = 'a'; letter <= 'z'; ++letter)
	{
	_putchar(letter);
	}
	_putchar('\n');
	}
}
