#include "main.h"

/**
 *print_sign -Entry point
 *@n: parameter for the print_sign function
 *Description: program prints the sign of an int if 0 it returns 0
 *Return: 1 (positive),0 (zero) ,-1 (negative)
 */
int print_sign(int n)
{
	int result;
	/*for positives*/
	if (n > 0)
	{	
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	return (result);
}
