#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the
 * last digit of a number.
 * @num: number
 *
 * Description : prints the last
 * digit of a number.
 *
 * Return : the value of the last
 * digit
 */
int print_last_digit(int num)
{
	_putchar(ab(num%10) + '0');
	return (abs(num%10));
}
