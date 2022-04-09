#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int low = 97;

	while (low <= 122)
	{
		if (low == 101 || low == 113)
		{
			low++; /*means go to next value 102 and 114 respectively*/
			continue;
		}
		putchar(low);
		low++;
	}
	putchar(10);
	return (0);
}
