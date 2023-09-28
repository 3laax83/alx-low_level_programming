#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}


/**
 * check - helper function
 * @s: the string
 * @len: length of string
 * @count: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int check(char *s, int len, int count)
{
	if (count >= len)
		return (1);
	if (s[len] == s[count])
		return (check(s, len - 1, count + 1));
	return (0);
}


/**
 * is_palindrome- a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: pointer to string.
 * Description: a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	int count = 0;

	return (check(s, length - 1, counter);
}
