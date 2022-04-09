#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int hex_num = 48, hex_low = 97;

	while (hex_num <= 57)
	{
		putchar(hex_num);
		hex_num++;
	}

	while (hex_low <= 102)
	{
		putchar(hex_low);
		hex_low++;
	}
	putchar(10);
	return (0);
}
