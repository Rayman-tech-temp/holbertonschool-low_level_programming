#include "main.h"

/**
 * print_alphabet - prints the alphabet with ascii
 * code and _putchar function.
 * Return: void - the result is put into the terminal.
 */
void print_alphabet(void)
{
	int letter = 97;

	while (letter < 123)
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
