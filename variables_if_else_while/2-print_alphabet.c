#include <stdio.h>
/**
 * main - declare an array of chars the alphabet and will print them out
 * in one line and at the end it will move to a new line.
 *
 * Return: 0 as this is an exercise to show outputs will always
 * return a success.
 */

int main(void)
{
	int letter = 97;

	do {
	putchar(letter);
	letter++;
	}
	while (letter < 123);
	putchar('\n');
	return (0);
}
