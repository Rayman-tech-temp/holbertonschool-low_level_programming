#include "main.h"

/**
 * jack_bauer - a terrible man torturing people
 * because it's justified in the trolly problem.
 */

void jack_bauer(void)
{
	int minutes, hours;

	minutes = 0;
	hours = 0;
	while (hours <= 23)
	{
		while (minutes < 60)
		{
			if (hours < 10)
				printf("0%d:", hours);
			else
				printf("%d:", hours);

			if (hours < 10)
				printf("0%d\n", minutes);
			else
				printf("%d\n", minutes);
			minutes = minutes + 1;
		}
		minutes = 0;
		hours = hours + 1;
		if (hours < 24)
		{
			if (hours < 10)
				printf("0%d:00\n", hours);
			else
				printf("%d:00\n", hours);
		}
	}
}
