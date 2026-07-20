#include <stdio.h>

/**
 * addition - a simple addition function for calculator.
 *
 * Returns: int Result variable that is a sum.
 *
 */

int addition(int a, int b)
{
	return (a + b);
}
int subtraction(int a, int b)
{
	return (a - b);
}

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
	int numC = 0;

	printf("Welcome to Simple Calculator!\n");
	do {
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\nChoice:");
		scanf("%d", &choice);
		if (choice == 1)
		{
			printf("A: ");
			scanf("%d", &numA);
			printf("B: ");
			scanf("%d", &numB);
			numC = addition(numA, numB);
			printf("Result: %d", numC);
		} else if (choice == 2)
		{
			scanf("A: %d", &numA);
			scanf("B: %d", &numB);
			numC = subtraction(numA, numB);
			printf("Result: %d", numC)
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
