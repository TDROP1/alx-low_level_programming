#include "main.h"

/**
 *print_sign -Entry point
 *@n: parameter for the print_sign function
 *Description: program prints the sign of an int if 0 it returns 0
 *Return: 1 (positive),0 (zero) ,-1 (negative)
 */
int print_sign(int n)
{
	/*for positives*/
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
