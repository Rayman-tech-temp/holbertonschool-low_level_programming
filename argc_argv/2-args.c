#include <stdio.h>
#include <stdlib.h>

/**
 * main - simple execution of argc and argv
 * parameters.
 * @argc: the count of items on the commandline.
 * @argv: an array of the items on the commandline.
 * Return: 0 - there is no fail state.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
