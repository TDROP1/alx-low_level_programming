#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: print lowercase alphabets
 * Return: void (nothing)
 */
void print_alphabet(void)
{
	int letter = 97;

	while (letter < 123)
	{
		_putchar(letter);
		_putchar('\n');
		letter++;
	}
}
