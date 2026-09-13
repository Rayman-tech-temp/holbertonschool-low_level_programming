#include <stdio.h>
/**
 * main - a while loop the sequentially increments throught the ASCII
 * table for lowercase alphabet then swap to the capitalised alphabet.
 *
 * Return: 0 as this is an exercise to show outputs will always
 * return a success.
 */

int main(void)
{
	int letter = 97;

	while (letter != 91)
	{
		if (letter == 123)
		{
			letter = 65;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
