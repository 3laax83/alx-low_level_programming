#include <stdio.h>
#include <string.h>
#include "_putchar.c"
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

	for (counter = 0; counter <= sizeof(output)/sizeof(char); ++counter)
	{
	_putchar(output[counter]);
	}
	_putchar('\n');
	return 0;
}
