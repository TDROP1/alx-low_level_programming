#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int low = 122;

	while (low >= 97)/*z to a*/
	{
		putchar(low);
		low--;
	}
	putchar(10);
	return (0);
}
