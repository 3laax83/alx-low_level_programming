#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - prints _putchar.
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char output[] = "_putchar";
	int counter;
	int size = sizeof(output) / sizeof(char);

	for (counter = 0; counter < size - 1; ++counter)
	{
	_putchar(output[counter]);
	}
	_putchar('\n');
	return (0);
}
