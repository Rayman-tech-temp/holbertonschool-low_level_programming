#include "main.h"
#include <stdio.h>

/**
 * main - the interactive terminal interface.
 *
 * Return:
 */

int main(void)
{
	int choice = 9;
	int numA = 0;
	int numB = 0;

	printf("Welcome to Simple Calculator!\n");
	do {
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\nChoice:");
		scanf("%d", &choice);
		if (choice == 1)
		{
			printf("A:");
			scanf("%d", &numA);
			printf("B:");
			scanf("%d", &numB);
			("Result: %d", addition(numA, numB));
		} else if (choice > 4)
		{
			printf("Invalid choice\n");
		} else if (choice == 0)
		{
			printf("Bye!");
		}
	} while (choice != 0);
	return (0);
}
