#include <stdio.h>

/**
 * main - the interactive terminal interface.
 *
 * Return:
 */

int main(void)
{
	int input = 9;

	printf("Welcome to Simple Calculator!\n");
	do {
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\nChoice:");
		scanf("%d", &input);
		if (input > 4)
		{
			printf("Invalid choice\n");
		} else if (input == 0)
		{
			printf("Bye!");
		}
	} while (input != 0);
	return (0);
}
