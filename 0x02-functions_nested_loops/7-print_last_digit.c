#include "main.h"

/**
 *print_last_digit - Entry point
 *@n:parameter
 *Description:progran returns last digit of a number
 *Return: value
 */
int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
		result = result * -1;
	_putchar(result + '0');
	return (result);
}
