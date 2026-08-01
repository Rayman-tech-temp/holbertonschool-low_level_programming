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
	int result;
	int x;
	int y;

	result = 0;
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;
		printf("%d\n", result);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
