#include <stdio.h>

/**
 * main -Entry point
 * Description: prints sequence of digits with seperators
 * Return:Always 0(success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar(10);
	return (0);
}
