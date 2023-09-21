#include "main.h"

/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	char *result;
	int sum = 0;

	while (*n1-- && *n2--)
	{
		sum = n1 + n2 + carry;
		if sum % 10 == 1
			carry = 1;
		else
			carry = 0;
	}
}
