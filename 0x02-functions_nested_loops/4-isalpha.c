#include "main.h"

/**
 *_isalpha -Entry point
 *@c : is the parameter for the function _isalpha
 *Description: program tests whether parameter is alphabetic or NOT
 *Return:1 (is alphabetic) or 0 (is not)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);/*is successful*/
	else
		return (0);
}
