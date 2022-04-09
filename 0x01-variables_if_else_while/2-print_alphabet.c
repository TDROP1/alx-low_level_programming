#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0(success)
 */

int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}
	putchar(0);
	return (0);
}
