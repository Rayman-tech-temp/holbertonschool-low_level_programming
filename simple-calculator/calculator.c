#include <stdio.h>

/**
 * main - the interactive terminal interface.
 *
 * Return:
 */

int main(void)
{
	int input=9;

	do {
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\nChoice:");
		scanf("%d", &input);
	} while (input != 0);
	return (0);
}
