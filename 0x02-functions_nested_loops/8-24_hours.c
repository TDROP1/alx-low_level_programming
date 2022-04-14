#include "main.h"

/**
 * jack_bauer -Entry point
 * Description: time in hours and minutes
 * Return: Always 0
 */

void jack_bauer(void)
{	/*format of times Hh:Mm*/
	int H = 48, h = 48, M = 48, m = 48;
	/*whileloop for the H in the format which ends at 2 with ascii 50*/
	while (H <= 50)
	{
		/*while for h in the format ends at 9 ,so that Hh reachs 24*/
		while (h <= 57)
		{
			/*if Hh does not exceed 23 then print the following*/
			if (H != 51 && h < 52)
			{
				/*in the format ,M cannot exceed 5 since minutes end at Hh:59*/
				while (M <= 53)
				{
					while (m <= 57)
					{
						_putchar(H);
						_putchar(h);
						_putchar(':');
						_putchar(M);
						_putchar(m);
						_putchar('\n');
						m++;
					}
					m = 48;/*reset the minutes to 0(ascii 48) for m and increment M*/
					M++;
				}
			}
			M = 48;
			/*increment the h*/
			h++;
		}
		/*increment H*/
		H++;
		/*as H increase ,reset h to 0 (ascii 48)*/
		h = 48;
	}


}
