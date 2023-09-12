#include <stdio.h>
#include "_putchar.c"
/*
 * print_alphabet 
 *
 * Description - prints the alphabet
 *
 * Return : Always 0.
 */
void print_alphabet(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; ++letter)
        {
        _putchar(letter);
        }
}
