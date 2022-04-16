#include "main.h"
/**
 * largest_number - returns largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int l;

	if (a >= b && a >= c)/*if a is greater than b or equal to it a is largest*/
	{
		l = a;
	}
	else if (b > a && b >= c)
	{
		l = b;
	}
	else
	{
		l = c;
	}
	return (l);
}
