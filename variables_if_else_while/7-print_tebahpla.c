#include <stdio.h>
/**
 * main - a while loop the sequentially increments through the ASCII
 * table for in reverse.
 *
 * Return: 0 as this is an exercise to show outputs will always
 * return a success.
 */

int main(void)
{
	int letter = 122;

	while (letter > 96)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
