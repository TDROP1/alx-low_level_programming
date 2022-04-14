#include "main.h"

/**
 *times_table -entry point
 *Description:print product of 0 to 9 stops at the 10th multiplication( n * 9)
 *Return: void
 */
void times_table(void)
{
	/*beginning from 0 to 9*/
	int num = 0;/*must increase by 1 and stop at 9*/
	int multiplier;
	int prod;

	while (num <= 9)
	{
		multiplier = 0;
		while (multiplier <= 9)
		{
			prod = num * multiplier;
			if (prod > 9 && prod < 100)
			{
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
				if (multiplier < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + prod);
				if (multiplier < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			/*increment multiplier*/
			multiplier++;
		}
		_putchar('\n');
		/*increment the num by 1*/
		num++;
	}
}
