#include "main.h"

/**
 * print_alphabet_x10 - loops ten times calling
 * print_alphabet.
 * Returns: Void - the output is in the terminal.
 */
void print_alphabet_x10(void)
{
	int i;
	int letter;

	i = 0;
	letter = 97;
	while (i < 10)
	{
		while (letter < 123)
		{
			_putchar(letter);
			letter++;
		}
		letter = 97;
		_putchar('\n');
		i = i + 1;
	}
}
