#include "main.h"
/**
 * print_alphabet : entry point
 * Return :void 
 */
void print_alphabet(void);
{
	int letter=97;
	while(letter <123)
	{
		_putchar(letter);
		_putchar('\n');
		letter++;
	}
}
