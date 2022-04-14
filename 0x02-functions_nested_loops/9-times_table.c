#include "main.h"
/**
 *times_table -entry point
 *Description:print product of 0 to 9 stops at the 10th multiplication( n * 9)
 *Return: void
 */
void times_table(void)
{
	int num = 0;
	int multi, prod;

	while (num <= 9)
	{
		multi = 0;
		while (multi <= 9)
		{
			prod = num * multi;
			if (prod == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod < 10)
			{
				_putchar (' ');
				_putchar('0' + prod);
			}
			else
			{
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}
			if (multi < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			multi++;
		}
		_putchar('\n');
		num++;
	}
}
