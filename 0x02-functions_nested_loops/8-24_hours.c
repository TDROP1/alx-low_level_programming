#include "main.h"

/**
 *jack_bauer -entry point
 *Description: prints times from 00:00 to 23:59
 *Return: void
 */

void jack_bauer(void)
{
	/*clock format is Hh:Mm*/
	int H = 0, h = 0, M = 0, m = 0;
	int hand = 9;

	while (H <= 2)
	{
		if (H == 2)
		{
			hand = 3;
		}
		while (h <= hand)
		{
			while (M <= 5)
			{
				while (m <= 9)
				{
					_putchar('0' + H);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + M);
					_putchar('0' + m);
					_putchar('\n');
					m++;
				}
				M++;
			}
			h++;
		}
		H++;
	}
}
