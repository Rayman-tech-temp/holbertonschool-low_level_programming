#include <stdio.h>
#include <stdlib.h>

/**
 * main - simple execution of argc and argv
 * parameters. the return value of atoi function
 * is the value of the input characters, 0 on failure.
 * @argc: the count of items on the commandline.
 * @argv: an array of the items on the commandline.
 *
 * Return: 0 - there is no fail state.
 */

int main(int argc, char *argv[])
{
	int result;
	int i;
	int x;

	result = 0;
	x = 0;
	i = 1;
	while (i < argc)
	{
		x = atoi(argv[i]);
		if (x != 0)
		{
			result = result + x;
		} else
		{
			printf("Error\n");
			return (1);
		}
		i = i + 1;
	}
	printf("%d\n", result);
	return (0);
}
