#include "main.h"

/**
 *_abs -Entry point
 *Description: program calculates the absolute value
 *@n: parameter
 *Return: Absolute value of parameter
 */
int _abs(int n)
{
	int result;

	if (n > 0)
		result = n;
	else if (n == 0)
		result = 0;
	else
		result = (n * -1);
	return (result);
}
