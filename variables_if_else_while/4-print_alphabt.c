#include <stdio.h>
/**
 * main - a while loop the sequentially increments throught the ASCII
 * table for lowercase alphabet but with a condition of skipping q and e.
 *
 * Return: 0 as this is an exercise to show outputs will always
 * return a success.
 */

int main(void)
{
	int letter = 97;

	while (letter < 123 && letter >= 97)
	{
		if (letter != 101 && letter != 113)
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
