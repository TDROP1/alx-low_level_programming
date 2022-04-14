#include "main.h"

/**
 * jack_bauer -Entry point
 * Description: time in hours and minutes
 * Return: Always 0
 */

void jack_bauer(void)
{
	int H = 0, h = 0, M = 0, m = 0;

	while (H <= 2)
	{
		while (h <= 9)
		{
			if (H <= 2 && h <= 3)
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
					m = 0;
					M++;
				}
			}
			M = 0;
			h++;
		}
		h = 0;
		H++;
	}
}
