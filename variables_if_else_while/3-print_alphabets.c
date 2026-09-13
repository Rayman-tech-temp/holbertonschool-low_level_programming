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
		putchar(letter);
		letter++;
		if (letter == 122)
		{
			letter = 65;
		}
	}
	putchar('\n');
	return (0);
}
