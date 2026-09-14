#include "main.h"

/**
 * print_alphabet_x10 - loops ten times calling
 * print_alphabet.
 * Returns: Void - the output is in the terminal.
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i = i + 1;
	}
}
