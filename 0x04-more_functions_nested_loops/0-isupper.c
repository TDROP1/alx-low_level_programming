#include "main.h"

/**
 * _isupper - check uppercase
 * @c: parameter
 * Return: 1(uppercase),0(not)
 */
int _isupper(int c)
{
	int res;

	if (c >= 65 && c <= 90)
	{
		res = 1;
	}
	else
		res = 0;
	return (res);
}
