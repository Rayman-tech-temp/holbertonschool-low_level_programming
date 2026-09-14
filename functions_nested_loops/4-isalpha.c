#include "main.h"

/**
 * _isalpha - checks if it's in the alpha characters in ASCII
 * @c: character to inspect.
 * Return: int - 1 for Alpha Character and 0 for otherwise.
 */
int _isalpha(int c)
{
	int output;

	output = 0;
	if (c >= 65 && c <= 90)
	{
		output = 1;
	} else if (c >= 97 && c <= 122)
	{
		output = 1;
	}

	return (output);
}
