#include "main.h"

/**
 * jack_bauer -Entry point
 * Description: time in hours and minutes
 * Return: Always 0
 */

int jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		/*output the tens of the hours 00 to 23*/
		/*if the hours are less than 10 output 01-09*/
		if (hours < 10)
		{
			_putchar('0');
		}
		_putchar(hours);

		while (minutes < 60)
		{
			_putchar(':');
			if (minutes < 10)
			{
				_putchar ('0');
			}
			_putchar(minutes);
			minutes++;

		}
		_putchar('\n');
		if (minutes >= 60)
		{
			hours++;
			minutes = 0;
		}
	}


