#include "main.h"

/**
 * jack_bauer - a terrible man torturing people
 * because it's justified in the trolly problem.
 */

void jack_bauer(void)
{
	int minutes = 48, hours = 48, tensminute = 48, tenshour = 48;

	while (tenshour <= 50)
	{
		while (tensminute < 54 && tensminute >= 48)
		{
			_putchar(tenshour);
			_putchar(hours);
			_putchar(58);
			_putchar(tensminute);
			_putchar(minutes);
			_putchar('\n');
			minutes = minutes + 1;
			if (minutes > 57)
			{
				minutes = 48;
				tensminute = tensminute + 1;
			}
		}
		if (tenshour == 50 && hours == 51)
		{
			tenshour = tenshour + 1;
			hours = 48;
		}
		tensminute = 48;
		minutes = 48;
		hours = hours + 1;
		if (hours > 57)
		{
			hours = 48;
			tenshour = tenshour + 1;
		}
	}
}
