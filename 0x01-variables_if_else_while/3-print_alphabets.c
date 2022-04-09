#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int low = 97, upp = 65;

	while (low <= 122)
	{
		putchar(low);
		low++;
	}

	while (upp <= 90)
	{
		putchar(upp);
		upp++;
	}
	putchar(10);
	return (0);
}
