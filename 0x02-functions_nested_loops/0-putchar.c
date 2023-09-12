#include <stdio.h>
#include <string.h>
/*
 * main - contains the main fuction.
 *
 * Description - prints _putchar
 *
 * Return Always Success (return 0)
*/
int main(void)
{
	char output[] = "__putchar";
	int counter;
	int size = sizeof(output)/sizeof(char);

	for (counter = 0; counter <= size; ++counter)
	{
	putchar(output[counter]);
	}
	putchar('\n');
	return 0;
}
