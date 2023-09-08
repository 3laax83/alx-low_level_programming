#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints the alphabet in lowercase
 *
 * Description: a program that prints the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (!(letter == 'q' || letter == 'e'))
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
