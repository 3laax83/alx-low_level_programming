#include <stdio.h>
#include <string.h>
#include "main.h"
/*
 * main - contains the main fuction.
 *
 * Description - prints _putchar
 *
 * Return: return 0
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
