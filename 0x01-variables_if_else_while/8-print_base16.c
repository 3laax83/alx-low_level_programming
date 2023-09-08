#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *
 * Description:  a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (char num = '0'; num <= '9'; ++num)
		putchar(0 + num);
	for (char letter = 'a'; letter <= 'f'; ++letter)
		putchar(letter);
	putchar('\n');
	return (0);
}
