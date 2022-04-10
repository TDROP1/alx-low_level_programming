#include <stdio.h>

/**
 * main - Entry point
 * Description: outputs single occuring combination of 2 digits
 * Return: Always 0(success)
 */

int main(void)
{
	int x = 48, y = 48, limit = 58;

	while (x >= 48)
	{
		while (y < limit)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);
				if (x + y != 113)
				{
				putchar(',');
				putchar(' ');
				}
			}
			y++;
		}
		if (y == limit)
		{
			y = 48;
			x++;
		}
		if (x > limit - 1)
		{
			break;
		}
	}
	return (0);
}
