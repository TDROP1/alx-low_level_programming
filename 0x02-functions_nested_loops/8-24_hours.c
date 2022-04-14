#include "main.h"

/**
 *jack_bauer -entry point
 *Description: prints times from 00:00 to 23:59
 *Return: void
 */

void jack_bauer(void)
{
	/*clock format is Hh:Mm*/
	int h1 = 0, h2, m1, m2;
	int limit = 9;

	while (h1 <= 2)
	{
		if (h1 == 2)
		{
			limit = 3;
		}
		h2 = 0;
		while (h2 <= limit)
		{
			m1 = 0;
			while (m1 <= 5)
			{
				m2 = 0;
				while (m2 <= 9)
				{
					_putchar('0' + h1);
					_putchar('0' + h2);
					_putchar(':');
					_putchar('0' + m1);
					_putchar('0' + m2);
					_putchar('\n');
					m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}
}
