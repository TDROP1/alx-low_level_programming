#include "main.h"

/**
 *_islower - Entry point
 *Description: int c is the _islower functions parameter
 *@c : parameter for the function _islower
 *Return: 1(is lowercase) or 0 (is not lowercase)
 */
int _islower(int c)/*c is a parameter of the function*/
{
	int range = 98;

	/*check if its lowercase or not*/
	while (range < 123)
	{
		if (c == range)
			return (1);
		/*if c  exceed 'z' -122 and or is  less than 'a' -97 on the ASCII output 0*/
		else if (c > 122 || c < 97)
			return (0);
		range++;
	}
}
