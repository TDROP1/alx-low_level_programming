#include <stdio.h>

/**
 * main - Entry point
 * Description: outputs single occuring combination of 2 digits
 * Return: Always 0(success)
 */

int main(void)
{
	int x = 48, y = 48;

	while (x < 58)
	{
		if (x <= y)
		{
			while (x >= y)
			{
				if (y <= x)
				{
					y++;
					continue;
				}
				else if (y > x)
				{
					putchar(x);
					putchar(y);
					putchar(',');
					putchar(' ');
					y++;
				}
			}
		}
		if (y == 58)
		{
			y = 48;
			x++;
		}
		if (x > y)
		{
			y++;
		}
	}
	return (0);
}
