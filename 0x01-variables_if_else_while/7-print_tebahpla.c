#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int low = 122;

	while (low >= 65)
	{
		putchar(low);
		low--;
	}
	putchar(10);
	return (0);
}
