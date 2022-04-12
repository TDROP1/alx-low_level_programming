#include "main.h"

/**
 *print_alphabet_x10 -Entry point
 *Description : print lowercase alphabets 10 times with newlines
 *Return :void (no value)
 */
void print_alphabet_x10(void)
{
	int lines = 0, letter = 97;
	/*while for the number of lines*/
	while (lines < 10)
	{
		/*while loop for the alphabets in a sequence*/
		while (letter < 123)
		{
			_putchar(letter);
			/*increment letter*/
			letter++;
		}
		/*place newline after the alphabet*/
		_putchar('\n');
		/*increment lines*/
		lines++;
		/*reset the letters value back to 97 */
		letter = 97;
	}

}
